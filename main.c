/*
 * Author:  Chiappalone Mattia
 * Date:    May 2023
 * Version: v1.0
 * 
 * IDE:         MPLAB X IDE v3.40
 *          
 * 
 *
 * Microcontroller: PIC18LF65K40
 * 
 * PinOut OLIMEX:
 * 
 * GND     1    16  GND
 * DIO5    2    15  DIO4
 * SCK     3    14  DIO3
 * MISO    4    13  DIO2
 * MOSI    5    12  DIO1
 * NSS     6    11  DIO0
 * 3V3     7    10  NRESET
 * GND     8    9   GND
 * 
 *  PIC connection with respect to Olimex Radio Module (https://www.olimex.com/Products/IoT/LoRa/)
 *  RB0 (48) -> DIO5
 *  RB1 (47) -> DIO0    
 *  RB2 (46) -> DIO1   
 *  RB4 (44) -> DIO2    
 *  RC0 (30) -> NRESET  
 *  RC1 (29) -> NSS
 *  
 *  RD6 (50) -> SCK2
 *  RD7 (49) -> SDI2 or MISO2
 *  RD5 (51) -> SDO2 or MOSI2
 * 
 *  RC2 (33) -> User LED
 * 
*/


#include "mcc_generated_files/mcc.h"

// my functions
void sendPacket(void);
void flash(void);

// Variables
uint8_t portNumber = 2;
uint16_t payload[1];
uint8_t JoinedServer = 0;

unsigned long int fCount = 0;         // Packet counter

// Premade functions for LoRaWAN & variables
uint8_t nwkSKey[16] = {0xDC, 0x98, 0x06, 0x0B, 0x22, 0xB5, 0xBA, 0x21, 0x61, 0xB3, 0xA9, 0x95, 0x7C, 0x88, 0x03, 0x1F};
uint8_t appSKey[16] = {0x45, 0x37, 0x1A, 0x44, 0xB2, 0x99, 0x80, 0x1D, 0x2E, 0x5C, 0xA1, 0x9E, 0x38, 0xA5, 0x03, 0x2A};
//uint32_t devAddr = 0x00006580; Starting code was obtained from PIC18LF65K80
uint32_t devAddr = 0x00006540; 
void RxDataDone(uint8_t* pData, uint8_t dataLength, OpStatus_t status);
void RxJoinResponse(bool status);

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
    //printf("System Initialized");   // Baud Rate 300
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    myLED_SetHigh();                // Custom function written by MCC
    
    LORAWAN_Init(RxDataDone, RxJoinResponse);
    LORAWAN_SetNetworkSessionKey(nwkSKey);
    LORAWAN_SetApplicationSessionKey(appSKey);
    LORAWAN_SetDeviceAddress(devAddr);
    LORAWAN_Join(ABP);
    
    // Setting spreading Factor:
    // Data Rate 0 -> SF12
    // Data Rate 1 -> SF11
    // ....
    // Data Rate 5 -> SF7
    LORAWAN_SetCurrentDataRate(5); //SF7
    
    
    // While the network isnt joined do nothing...
       while(JoinedServer == 0){   
        LORAWAN_Mainloop();
        myLED_SetLow();
    }
    
    
    bool timeToSend = 1;                  // When 1 it sends a packet
    uint8_t count = 0;                    // Counts to 60 and then it sets timeToSend
    
    
    while (1){   
        
        // Has to be called at least once in the while loop
        // runs Timer1 for the stack
        LORAWAN_Mainloop();
       
        // If it is time to send a packet it will flash the led and queue the packet
        
        if(timeToSend == 1){
            timeToSend = 0;
            flash();
            sendPacket();
        }
        
        // Once 20 seconds have passed I can send again a packet
        
        if(count == 120){
            count = 0;
            timeToSend = 1;
            // There is a bug in the library that makes the microcontroller think the transceiver
            // is still in the receive window, meaning that the transmission has never ended.
            // This command resets the status of the transceiver to IDLE so that it is possible 
            // to queue and send a new packet 
            
            // Regarding the bug, the pin DIO0 of the transceiver pulls high the pin once the Tx is done
            // However the library is not aware of that..
            // To bypass this it is possible to poll that pin and call the following instruction to manually
            // end the transmission and maybe send the controller to sleep right after
            LORAWAN_SetClass(CLASS_A);
            
        }
        
        // Increment the seconds...
        for(int x = 0; x < 1000; x++) __delay_ms(1);
        count++;
       
    } // End of while
} // End of main

void sendPacket(void){
    
    // Incrementing the fCount
    LORAWAN_SetUplinkCounter(++fCount);
    
    //Insert here your payload
    payload[0] = 0xFFFF;
    LORAWAN_Send(UNCNF, portNumber, &payload, sizeof(payload)); 
}

void RxDataDone(uint8_t* pData, uint8_t dataLength, OpStatus_t status)
{
}

void RxJoinResponse(bool status)
{    
    JoinedServer = 1;
}

void flash(void){
    for(uint8_t x = 0; x < 5; x++){
        myLED_Toggle();
        __delay_ms(15);
        __delay_ms(15);
    }
    myLED_SetLow();
}
