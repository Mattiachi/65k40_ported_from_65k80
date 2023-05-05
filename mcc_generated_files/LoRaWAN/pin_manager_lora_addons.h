/******************************************************************************
  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager_lora_addons.h

  @Summary:
    This is the Pin Manager LoRa Addons header file which serves as an extension for Pin Manager
    module files generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides LoRa-specific defines for pin APIs for all used pins.
    Copyright (c) 2013 - 2016 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *************************************************************************
 *                           pin_manager_lora_addons.h
 *
 * Pin Manager LoRa addons header file
 *
 ******************************************************************************/


#ifndef PIN_MANAGER_LORA_IF_H
#define PIN_MANAGER_LORA_IF_H

#ifdef    __cplusplus
extern "C" {
#endif

#include "../pin_manager.h"

// get/set RADIO_DIO1 aliases
#define RADIO_DIO1_TRIS                     TRISB1
#define RADIO_DIO1_LAT                      LATB1
#define RADIO_DIO1_PORT                     RB1
#define RADIO_DIO1_WPU                      WPUB1
#define RADIO_DIO1_ANS                      ANSB1
#define RADIO_DIO1_SetHigh()                do { LATB1 = 1; } while(0)
#define RADIO_DIO1_SetLow()                 do { LATB1 = 0; } while(0)
#define RADIO_DIO1_Toggle()                 do { LATB1 = ~LATB1; } while(0)
#define RADIO_DIO1_GetValue()               PORTBbits.RB1
#define RADIO_DIO1_SetDigitalInput()        do { TRISB1 = 1; } while(0)
#define RADIO_DIO1_SetDigitalOutput()       do { TRISB1 = 0; } while(0)
#define RADIO_DIO1_SetPullup()              do { WPUB1 = 1; } while(0)
#define RADIO_DIO1_ResetPullup()            do { WPUB1 = 0; } while(0)
#define RADIO_DIO1_SetAnalogMode()          do { ANSB1 = 1; } while(0)
#define RADIO_DIO1_SetDigitalMode()         do { ANSB1 = 0; } while(0)

// get/set RADIO_DIO5 aliases
#define RADIO_DIO5_TRIS                     TRISB2
#define RADIO_DIO5_LAT                      LATB2
#define RADIO_DIO5_PORT                     RB2
#define RADIO_DIO5_WPU                      WPUB2
#define RADIO_DIO5_ANS                      ANSB2
#define RADIO_DIO5_SetHigh()                do { LATB2 = 1; } while(0)
#define RADIO_DIO5_SetLow()                 do { LATB2 = 0; } while(0)
#define RADIO_DIO5_Toggle()                 do { LATB2 = ~LATB2; } while(0)
#define RADIO_DIO5_GetValue()               PORTBbits.RB2
#define RADIO_DIO5_SetDigitalInput()        do { TRISB2 = 1; } while(0)
#define RADIO_DIO5_SetDigitalOutput()       do { TRISB2 = 0; } while(0)
#define RADIO_DIO5_SetPullup()              do { WPUB2 = 1; } while(0)
#define RADIO_DIO5_ResetPullup()            do { WPUB2 = 0; } while(0)
#define RADIO_DIO5_SetAnalogMode()          do { ANSB2 = 1; } while(0)
#define RADIO_DIO5_SetDigitalMode()         do { ANSB2 = 0; } while(0)

// get/set RADIO_DIO2 aliases
#define RADIO_DIO2_TRIS                     TRISB4
#define RADIO_DIO2_LAT                      LATB4
#define RADIO_DIO2_PORT                     RB4
#define RADIO_DIO2_WPU                      WPUB4
#define RADIO_DIO2_ANS                      ANSB4
#define RADIO_DIO2_SetHigh()                do { LATB4 = 1; } while(0)
#define RADIO_DIO2_SetLow()                 do { LATB4 = 0; } while(0)
#define RADIO_DIO2_Toggle()                 do { LATB4 = ~LATB4; } while(0)
#define RADIO_DIO2_GetValue()               PORTBbits.RB4
#define RADIO_DIO2_SetDigitalInput()        do { TRISB4 = 1; } while(0)
#define RADIO_DIO2_SetDigitalOutput()       do { TRISB4 = 0; } while(0)
#define RADIO_DIO2_SetPullup()              do { WPUB4 = 1; } while(0)
#define RADIO_DIO2_ResetPullup()            do { WPUB4 = 0; } while(0)
#define RADIO_DIO2_SetAnalogMode()          do { ANSB4 = 1; } while(0)
#define RADIO_DIO2_SetDigitalMode()         do { ANSB4 = 0; } while(0)



// get/set RADIO_DIO0 aliases
#define RADIO_DIO0_TRIS                     TRISB0
#define RADIO_DIO0_LAT                      LATB0
#define RADIO_DIO0_PORT                     RB0
#define RADIO_DIO0_WPU                      WPUB0
#define RADIO_DIO0_ANS                      ANSB0
#define RADIO_DIO0_SetHigh()                do { LATB0 = 1; } while(0)
#define RADIO_DIO0_SetLow()                 do { LATB0 = 0; } while(0)
#define RADIO_DIO0_Toggle()                 do { LATB0 = ~LATB0; } while(0)
#define RADIO_DIO0_GetValue()               PORTBbits.RB0
#define RADIO_DIO0_SetDigitalInput()        do { TRISB0 = 1; } while(0)
#define RADIO_DIO0_SetDigitalOutput()       do { TRISB0 = 0; } while(0)
#define RADIO_DIO0_SetPullup()              do { WPUB0 = 1; } while(0)
#define RADIO_DIO0_ResetPullup()            do { WPUB0 = 0; } while(0)
#define RADIO_DIO0_SetAnalogMode()          do { ANSB0 = 1; } while(0)
#define RADIO_DIO0_SetDigitalMode()         do { ANSB0 = 0; } while(0)    


// get/set RADIO_nReset aliases
#define RADIO_nReset_TRIS                   TRISC0
#define RADIO_nReset_LAT                    LATC0
#define RADIO_nReset_PORT                   RC0
#define RADIO_nReset_WPU                    WPUC0
#define RADIO_nReset_ANS                    ANSC0
#define RADIO_nReset_SetHigh()              do { LATC0 = 1; } while(0)
#define RADIO_nReset_SetLow()               do { LATC0 = 0; } while(0)
#define RADIO_nReset_Toggle()               do { LATC0 = ~LATC0; } while(0)
#define RADIO_nReset_GetValue()             PORTCbits.RC0
#define RADIO_nReset_SetDigitalInput()      do { TRISC0 = 1; } while(0)
#define RADIO_nReset_SetDigitalOutput()     do { TRISC0 = 0; } while(0)
#define RADIO_nReset_SetPullup()            do { WPUC0 = 1; } while(0)
#define RADIO_nReset_ResetPullup()          do { WPUC0 = 0; } while(0)
#define RADIO_nReset_SetAnalogMode()        do { ANSC0 = 1; } while(0)
#define RADIO_nReset_SetDigitalMode()       do { ANSC0 = 0; } while(0)        

// get/set SCK2 aliases
#define SCK2_TRIS                           TRISD6
#define SCK2_LAT                            LATD6
#define SCK2_PORT                           RD6
#define SCK2_WPU                            WPUD6
#define SCK2_ANS                            ANSD6
#define SCK2_SetHigh()                      do { LATD6 = 1; } while(0)
#define SCK2_SetLow()                       do { LATD6 = 0; } while(0)
#define SCK2_Toggle()                       do { LATD6 = ~LATD6; } while(0)
#define SCK2_GetValue()                     PORTDbits.RD6
#define SCK2_SetDigitalInput()              do { TRISD6 = 1; } while(0)
#define SCK2_SetDigitalOutput()             do { TRISD6 = 0; } while(0)
#define SCK2_SetPullup()                    do { WPUD6 = 1; } while(0)
#define SCK2_ResetPullup()                  do { WPUD6 = 0; } while(0)
#define SCK2_SetAnalogMode()                do { ANSD6 = 1; } while(0)
#define SCK2_SetDigitalMode()               do { ANSD6 = 0; } while(0)        

// get/set SDI2 aliases
#define SDI2_TRIS                           TRISD7
#define SDI2_LAT                            LATD7
#define SDI2_PORT                           RD7
#define SDI2_WPU                            WPUD7
#define SDI2_ANS                            ANSD7
#define SDI2_SetHigh()                      do { LATD7 = 1; } while(0)
#define SDI2_SetLow()                       do { LATD7 = 0; } while(0)
#define SDI2_Toggle()                       do { LATD7 = ~LATD7; } while(0)
#define SDI2_GetValue()                     PORTDbits.RD7
#define SDI2_SetDigitalInput()              do { TRISD7 = 1; } while(0)
#define SDI2_SetDigitalOutput()             do { TRISD7 = 0; } while(0)
#define SDI2_SetPullup()                    do { WPUD7 = 1; } while(0)
#define SDI2_ResetPullup()                  do { WPUD7 = 0; } while(0)
#define SDI2_SetAnalogMode()                do { ANSD7 = 1; } while(0)
#define SDI2_SetDigitalMode()               do { ANSD7 = 0; } while(0)        

// get/set RADIO_nCS aliases
#define RADIO_nCS_TRIS                      TRISC1
#define RADIO_nCS_LAT                       LATC1
#define RADIO_nCS_PORT                      RC1
#define RADIO_nCS_WPU                       WPUC1
#define RADIO_nCS_ANS                       ANSC1
#define RADIO_nCS_SetHigh()                 do { LATC1 = 1; } while(0)
#define RADIO_nCS_SetLow()                  do { LATC1 = 0; } while(0)
#define RADIO_nCS_Toggle()                  do { LATC1 = ~LATC1; } while(0)
#define RADIO_nCS_GetValue()                PORTCbits.RC1
#define RADIO_nCS_SetDigitalInput()         do { TRISC1 = 1; } while(0)
#define RADIO_nCS_SetDigitalOutput()        do { TRISC1 = 0; } while(0)
#define RADIO_nCS_SetPullup()               do { WPUC1 = 1; } while(0)
#define RADIO_nCS_ResetPullup()             do { WPUC1 = 0; } while(0)
#define RADIO_nCS_SetAnalogMode()           do { ANSC1 = 1; } while(0)
#define RADIO_nCS_SetDigitalMode()          do { ANSC1 = 0; } while(0)        

// get/set SDO2 aliases
#define SDO2_TRIS                           TRISD5
#define SDO2_LAT                            LATD5
#define SDO2_PORT                           RD5
#define SDO2_WPU                            WPUD5
#define SDO2_ANS                            ANSD5
#define SDO2_SetHigh()                      do { LATD5 = 1; } while(0)
#define SDO2_SetLow()                       do { LATD5 = 0; } while(0)
#define SDO2_Toggle()                       do { LATD5 = ~LATD5; } while(0)
#define SDO2_GetValue()                     PORTDbits.RD5
#define SDO2_SetDigitalInput()              do { TRISD5 = 1; } while(0)
#define SDO2_SetDigitalOutput()             do { TRISD5 = 0; } while(0)
#define SDO2_SetPullup()                    do { WPUD5 = 1; } while(0)
#define SDO2_ResetPullup()                  do { WPUD5 = 0; } while(0)
#define SDO2_SetAnalogMode()                do { ANSD5 = 1; } while(0)
#define SDO2_SetDigitalMode()               do { ANSD5 = 0; } while(0)        

#ifdef    __cplusplus
}
#endif

#endif    /* PIN_MANAGER_LORA_IF_H */

/**
 End of File
*/