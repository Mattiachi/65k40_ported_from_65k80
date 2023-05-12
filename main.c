/*
 * Author:  Chiappalone Mattia
 * Date:    May 2023
 * Version: v1.0
 * 
 * IDE:         MPLAB X IDE v3.55 (native is 3.40)
 * 
 * COMPILER:    XC8 v1.41 PRO  (native is 1.38) [da testare]
 *              XC8 v2.41 PRO   [da testare, compila * si nota che comprime meglio il codice]
 *              XC8 v1.45 PRO   [da testare, compila]
 * 
 * For this microcontroller, that features 32KB as program memory is needed
 * the PRO version of compilator, otherwise the code will exced the memory space
 *            
 *
 * Microcontroller: PIC18LF65K40
 * 
 * PORTING TEST!!!! 
 * The following files were generated by MCC for this MCU
 *      ext_int.h               ext_int.c
 *      interrupt_manager.h     interrupt_manager.c
 *      mcc.h                   mcc.c
 *      pin_manager.h           pin_manager.c
 *      spi2.h                  spi2.c
 *      tmr1.h                  tmr1.c
 * 
 * All the other files contained in the LoRaWAN folder were copied from the project
 * linked here (https://github.com/Mattiachi/65k80) and then modified in order to 
 * preserve the compatibility from the PIC18LF65K80.
 * 
 * This is indeed a test to show that is possible to port the LoRaWAN Library from a
 * supported MCU to an unsupported MCU
 * 
 * 
 *  PIC connection with respect to Olimex Radio Module (https://www.olimex.com/Products/IoT/LoRa/)
 *  RB0 (48) -> DIO0
 *  RB1 (47) -> DIO1    
 *  RB2 (46) -> DIO5    sono da aggiornare sti pin
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
//#include <stdio.h>      // To use printf in EUSART1

// my functions
void sendPacket(void);
void flash(void);

// Variables
int portNumber = 2;
uint16_t payload[1];
uint8_t JoinedServer = 0;
int count = 1;          // Number of packets sent

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
    
       while(JoinedServer == 0){   // While the network isnt joined do nothing...
        LORAWAN_Mainloop();
        myLED_SetLow();
    }
    
    int flag = 5;   // When flag reaches 10 it can send a message

    while (1)
    {   
        LORAWAN_Mainloop();
        flag++;
        
        if(flag > 10){
            flag = 0;
            flash();
            sendPacket();
        }
     for(int x = 0; x < 1000; x++) __delay_ms(1);   // delay of one second
     
    } // End of while
} // End of main

void sendPacket(void){
    myLED_SetHigh();
    payload[0] = 0xFF00;
    LORAWAN_Send(UNCNF, portNumber, &payload, sizeof(payload)); 
    //printf("Packet #%d sent: temperature value: %d\n\r", count, payload[0]);
    count++;
    myLED_SetLow();
}

void RxDataDone(uint8_t* pData, uint8_t dataLength, OpStatus_t status)
{
}

void RxJoinResponse(bool status)
{    
    JoinedServer = 1;
}

void flash(void){
    for(uint8_t x = 0; x < 10; x++){
        myLED_Toggle();
        __delay_ms(25);
        __delay_ms(25);
    }
    myLED_SetLow();
}
