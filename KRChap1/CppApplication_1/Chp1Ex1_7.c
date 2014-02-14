/* 
 * File:   Chp1Ex1_7.c 
 * Author: matthewvelemir
 * Description: Write a program to copy the input to the output, replacing each 
 * string of 1 or more blanks with a single blank.             
 * K&R FIrst Edition
 */

#include <stdlib.h>
#include <stdio.h> 

int ioexercise1_7(void)
{
    int inputc, previousc;
 
        while ((inputc = getchar()) != EOF)  // CTRL D for EOF 
        {
           
            
            if (!(previousc == ' ' && inputc == ' ')) 
            {
                printf("%c", inputc);                            // only print output if previous and current characters are not spaces 
            }   
    
            previousc = inputc;                                  // assign current input to previous for comparison next time around. 
            
        } // while 
    
    return 0; 
           
} //end main 

