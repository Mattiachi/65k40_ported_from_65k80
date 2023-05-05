/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.0
        Device            :  PIC18LF65K40
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

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

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set DIO0 aliases
#define DIO0_TRIS               TRISBbits.TRISB0
#define DIO0_LAT                LATBbits.LATB0
#define DIO0_PORT               PORTBbits.RB0
#define DIO0_WPU                WPUBbits.WPUB0
#define DIO0_OD                ODCONBbits.ODCB0
#define DIO0_ANS                ANSELBbits.ANSELB0
#define DIO0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define DIO0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define DIO0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define DIO0_GetValue()           PORTBbits.RB0
#define DIO0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define DIO0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define DIO0_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define DIO0_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define DIO0_SetPushPull()    do { ODCONBbits.ODCB0 = 1; } while(0)
#define DIO0_SetOpenDrain()   do { ODCONBbits.ODCB0 = 0; } while(0)
#define DIO0_SetAnalogMode()  do { ANSELBbits.ANSELB0 = 1; } while(0)
#define DIO0_SetDigitalMode() do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set DIO1 aliases
#define DIO1_TRIS               TRISBbits.TRISB1
#define DIO1_LAT                LATBbits.LATB1
#define DIO1_PORT               PORTBbits.RB1
#define DIO1_WPU                WPUBbits.WPUB1
#define DIO1_OD                ODCONBbits.ODCB1
#define DIO1_ANS                ANSELBbits.ANSELB1
#define DIO1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define DIO1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define DIO1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define DIO1_GetValue()           PORTBbits.RB1
#define DIO1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define DIO1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define DIO1_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define DIO1_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define DIO1_SetPushPull()    do { ODCONBbits.ODCB1 = 1; } while(0)
#define DIO1_SetOpenDrain()   do { ODCONBbits.ODCB1 = 0; } while(0)
#define DIO1_SetAnalogMode()  do { ANSELBbits.ANSELB1 = 1; } while(0)
#define DIO1_SetDigitalMode() do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set DIO5 aliases
#define DIO5_TRIS               TRISBbits.TRISB2
#define DIO5_LAT                LATBbits.LATB2
#define DIO5_PORT               PORTBbits.RB2
#define DIO5_WPU                WPUBbits.WPUB2
#define DIO5_OD                ODCONBbits.ODCB2
#define DIO5_ANS                ANSELBbits.ANSELB2
#define DIO5_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define DIO5_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define DIO5_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define DIO5_GetValue()           PORTBbits.RB2
#define DIO5_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define DIO5_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define DIO5_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define DIO5_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define DIO5_SetPushPull()    do { ODCONBbits.ODCB2 = 1; } while(0)
#define DIO5_SetOpenDrain()   do { ODCONBbits.ODCB2 = 0; } while(0)
#define DIO5_SetAnalogMode()  do { ANSELBbits.ANSELB2 = 1; } while(0)
#define DIO5_SetDigitalMode() do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()    do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()   do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()   do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()         PORTBbits.RB3
#define RB3_SetDigitalInput()   do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()  do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()     do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()   do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode() do { ANSELBbits.ANSELB3 = 1; } while(0)
#define RB3_SetDigitalMode()do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set DIO2 aliases
#define DIO2_TRIS               TRISBbits.TRISB4
#define DIO2_LAT                LATBbits.LATB4
#define DIO2_PORT               PORTBbits.RB4
#define DIO2_WPU                WPUBbits.WPUB4
#define DIO2_OD                ODCONBbits.ODCB4
#define DIO2_ANS                ANSELBbits.ANSELB4
#define DIO2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define DIO2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define DIO2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define DIO2_GetValue()           PORTBbits.RB4
#define DIO2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define DIO2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define DIO2_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define DIO2_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define DIO2_SetPushPull()    do { ODCONBbits.ODCB4 = 1; } while(0)
#define DIO2_SetOpenDrain()   do { ODCONBbits.ODCB4 = 0; } while(0)
#define DIO2_SetAnalogMode()  do { ANSELBbits.ANSELB4 = 1; } while(0)
#define DIO2_SetDigitalMode() do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set NRESET aliases
#define NRESET_TRIS               TRISCbits.TRISC0
#define NRESET_LAT                LATCbits.LATC0
#define NRESET_PORT               PORTCbits.RC0
#define NRESET_WPU                WPUCbits.WPUC0
#define NRESET_OD                ODCONCbits.ODCC0
#define NRESET_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define NRESET_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define NRESET_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define NRESET_GetValue()           PORTCbits.RC0
#define NRESET_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define NRESET_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define NRESET_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define NRESET_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define NRESET_SetPushPull()    do { ODCONCbits.ODCC0 = 1; } while(0)
#define NRESET_SetOpenDrain()   do { ODCONCbits.ODCC0 = 0; } while(0)

// get/set NSS aliases
#define NSS_TRIS               TRISCbits.TRISC1
#define NSS_LAT                LATCbits.LATC1
#define NSS_PORT               PORTCbits.RC1
#define NSS_WPU                WPUCbits.WPUC1
#define NSS_OD                ODCONCbits.ODCC1
#define NSS_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define NSS_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define NSS_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define NSS_GetValue()           PORTCbits.RC1
#define NSS_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define NSS_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define NSS_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define NSS_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define NSS_SetPushPull()    do { ODCONCbits.ODCC1 = 1; } while(0)
#define NSS_SetOpenDrain()   do { ODCONCbits.ODCC1 = 0; } while(0)

// get/set myLED aliases
#define myLED_TRIS               TRISCbits.TRISC2
#define myLED_LAT                LATCbits.LATC2
#define myLED_PORT               PORTCbits.RC2
#define myLED_WPU                WPUCbits.WPUC2
#define myLED_OD                ODCONCbits.ODCC2
#define myLED_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define myLED_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define myLED_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define myLED_GetValue()           PORTCbits.RC2
#define myLED_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define myLED_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define myLED_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define myLED_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define myLED_SetPushPull()    do { ODCONCbits.ODCC2 = 1; } while(0)
#define myLED_SetOpenDrain()   do { ODCONCbits.ODCC2 = 0; } while(0)

// get/set RD5 procedures
#define RD5_SetHigh()    do { LATDbits.LATD5 = 1; } while(0)
#define RD5_SetLow()   do { LATDbits.LATD5 = 0; } while(0)
#define RD5_Toggle()   do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define RD5_GetValue()         PORTDbits.RD5
#define RD5_SetDigitalInput()   do { TRISDbits.TRISD5 = 1; } while(0)
#define RD5_SetDigitalOutput()  do { TRISDbits.TRISD5 = 0; } while(0)
#define RD5_SetPullup()     do { WPUDbits.WPUD5 = 1; } while(0)
#define RD5_ResetPullup()   do { WPUDbits.WPUD5 = 0; } while(0)
#define RD5_SetAnalogMode() do { ANSELDbits.ANSELD5 = 1; } while(0)
#define RD5_SetDigitalMode()do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set RD6 procedures
#define RD6_SetHigh()    do { LATDbits.LATD6 = 1; } while(0)
#define RD6_SetLow()   do { LATDbits.LATD6 = 0; } while(0)
#define RD6_Toggle()   do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define RD6_GetValue()         PORTDbits.RD6
#define RD6_SetDigitalInput()   do { TRISDbits.TRISD6 = 1; } while(0)
#define RD6_SetDigitalOutput()  do { TRISDbits.TRISD6 = 0; } while(0)
#define RD6_SetPullup()     do { WPUDbits.WPUD6 = 1; } while(0)
#define RD6_ResetPullup()   do { WPUDbits.WPUD6 = 0; } while(0)
#define RD6_SetAnalogMode() do { ANSELDbits.ANSELD6 = 1; } while(0)
#define RD6_SetDigitalMode()do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set RD7 procedures
#define RD7_SetHigh()    do { LATDbits.LATD7 = 1; } while(0)
#define RD7_SetLow()   do { LATDbits.LATD7 = 0; } while(0)
#define RD7_Toggle()   do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define RD7_GetValue()         PORTDbits.RD7
#define RD7_SetDigitalInput()   do { TRISDbits.TRISD7 = 1; } while(0)
#define RD7_SetDigitalOutput()  do { TRISDbits.TRISD7 = 0; } while(0)
#define RD7_SetPullup()     do { WPUDbits.WPUD7 = 1; } while(0)
#define RD7_ResetPullup()   do { WPUDbits.WPUD7 = 0; } while(0)
#define RD7_SetAnalogMode() do { ANSELDbits.ANSELD7 = 1; } while(0)
#define RD7_SetDigitalMode()do { ANSELDbits.ANSELD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF4 pin functionality
 * @Example
    IOCBF4_ISR();
 */
void IOCBF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF4_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF4_SetInterruptHandler() method.
    This handler is called every time the IOCBF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF4_SetInterruptHandler(IOCBF4_InterruptHandler);

*/
extern void (*IOCBF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF4_SetInterruptHandler() method.
    This handler is called every time the IOCBF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF4_SetInterruptHandler(IOCBF4_DefaultInterruptHandler);

*/
void IOCBF4_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/