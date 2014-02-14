/* 
 * File:   Chp1Ex1_11.c 
 * Author: matthewvelemir      
 * Description: 'words' must start with a letter to be valid.  Count words.         
 * K&R First Edition
 */

#include <stdlib.h>
#include <stdio.h>


#define YES 1
#define NO 0 

int ioexercise1_11(void)
{
   int inputc, numw, inword, firstc, isword; 
   
   isword = NO;
   inword = NO;
   numw = 0;
   
   while ( (inputc=getchar()) !=EOF)   // CTRL D for EOF
   {
                   
       if (inputc == ' ' || inputc == '\n' || inputc =='\t')
       {
        inword = NO;   
        isword = NO;
       } // inword if 
       
       else if ( inword == NO)
       {
           inword = YES;
           if ((isword == NO) && ((inputc >= 97 && inputc <= 122) || (inputc >= 65 && inputc <= 90 ))) // ascii range
           {
                   isword = YES;
                   numw++;
           } //letter range if
      } // else if 
   }// end while
   
    printf("Words: %d", numw);
    
    return 0;
  }// end main
