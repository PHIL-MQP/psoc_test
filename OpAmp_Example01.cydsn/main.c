 /*******************************************************************************
* File: main.c
*
* Version : 1.2
*
* Description: 
*   This is a source code for example project of Opamp.
*
********************************************************************************
* Copyright 2012, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/

#include <project.h>

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  Main function performs following functions:
*   1. Initializes the LCD and clears the display
*   2. Start Opamp and VDAC
*   3. Opamp power is set to High Power using API
*   4. Print test name and Opamp mode on the LCD
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{
    /* Start the LCD component */
    LCD_Char_1_Start();

    /* Clear LCD Display */
    LCD_Char_1_ClearDisplay();

    /* Start the OpAmp component */
    Opamp_1_Start();

    /* Start the VDAC component */
    VDAC8_1_Start();

    /* Sets the OpAmp power mode to High power */
    Opamp_1_SetPower(Opamp_1_HIGHPOWER);

    LCD_Char_1_Position(0u, 0u);
    LCD_Char_1_PrintString("   Opamp DEMO");

    LCD_Char_1_Position(1u, 0u);
    LCD_Char_1_PrintString("  Non-Inv Mode");

    for(;;)
    {
    }
}


/* [] END OF FILE */
