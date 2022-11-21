/*****************************************************************************
  * File:   main.cpp
 * Lab name:
 * 
 * Lab description:
 *
 * Author       Date    Version and description
 *     
 * 
 *
 *****************************************************************************/

#include "Tick_core.h"
#include <xc.h>
#include <stdio.h>
#include "initBoard.h"
#include "oled_init.h"




int main(void) {
    /* When using the OLED, the following line MUST always be the first line to run 
     * when entering the main                                                        */
    //oled_init();  // part of the static lib.  Clk frequency at 3.63MHz
    
    ios_init();
    adc_init();

    while(1){
        
    }
    return 0;
}


