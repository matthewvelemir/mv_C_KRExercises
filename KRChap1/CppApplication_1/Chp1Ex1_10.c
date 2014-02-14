/* 
 * File:   Chp1Ex1_10.c 
 * Author: matthewvelemir      
 * Description: Print out 1 'word' per line.          
 * K&R First Edition
 */

#include <stdlib.h>
#include <stdio.h>


#define YES 1
#define NO 0 

int ioexercise1_10(void)
{
   int inputc, inword; 
   
   inword = NO;
   
   while ( (inputc=getchar()) !=EOF)   // CTRL D for EOF
   {
                   
       if (!(inputc == ' ' || inputc == '\n' || inputc =='\t'))  // a bit strange but if you're not dealing with a space, cr, or tab, you're in a word.
       {
        inword = YES;                                          
        printf("%c", inputc);                                   // so print the input 
       } // inword if 
       else if (inword == YES)                                  // the yes/no flags keep extra spaces and tabs from being recognized as words
       {                                                        // so just 1 new line per 'word' or collection of tabs, spaces, CRs
           inword = NO;                                         
           printf("\n");                                        // you are in a space, cr, or tab, start a new line 
      } // inword else if
      
   }// end while
   
   return 0;
  }// end main
