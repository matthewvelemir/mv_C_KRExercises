/* 
 * File:   Chp1Ex1_8.c 
 * Author: matthewvelemir      
 * Description: Replace tab with -> and backspace by <-           
 * K&R First Edition
 */

#include <stdio.h>
#include <stdlib.h>

int ioexercise1_8 (void)
{
    
    int inputc,previousc;
    
    while ( (inputc=getchar()) != EOF)    // Ctrl D for EOF
    {
       if (inputc == 9)  // used '\t' before testing for bkspace
        {
         
           printf(" ->");
           inputc = ' ';       
                                          
        } // end if
      
       if (inputc == 8)  // '\b' is not registering
       {
           printf("<-");
           
       }// end if
       
        printf("%c", inputc);
        
    
    }// end while 
    
    
    
    
   return 0; 
} //end main
