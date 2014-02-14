/* 
 * File:  Chp1Ex1_12.c 
 * Author: matthewvelemir      
 * Description: Program to count the length of words in the input.
 * Wolfram says 5.1 is the average length of an english word.  Many words are
 * 10 letters.  10 seems a good cut off.
 * K&R First Edition
 */

#include <stdlib.h>
#include <stdio.h>

#define YES 1
#define NO 0 
#define maxlength 12

int ioexercise1_12(void)
{
   int inputc, inword, numchar, longest; 
   int i,j;
   int wordlength[maxlength];
   
   inword = NO;
   numchar=longest=0;
   for (i=0;  i < maxlength; i++)
   {
       wordlength[i]=0;
   }// for
   
   
   while ( (inputc=getchar()) !=EOF)   // CTRL D for EOF
   {
                   
       if (!(inputc == ' ' || inputc == '\n' || inputc =='\t'))  // 
       {
        inword = YES;                                          
        ++numchar;                                 
       } // inword if 
       else if (inword == YES)                                  
       {                                                       
           
           if (numchar>10)
           {
               ++wordlength[11];
               if (wordlength[11] > longest)
                   longest = wordlength[11];
           }//if
           else
           {
                ++wordlength[numchar];
                if (wordlength[numchar] > longest)
                    longest = wordlength[numchar];
           }// else 
           numchar=0;
           inword = NO;                                         
                                                  
      } // inword else if
      
   }// end input while
   
   printf("\n\n");
   for (i=longest; i>0; i--)
   {
       printf("%2.0d | ", i); // display is organized for up to 99 occurrences 
       for(j=1; j<maxlength; j++)
       {
           if (wordlength[j] >= i)
               printf("=  ");
           else 
               printf("   ");
       }// for horizontal
       printf("\n");
   }//output for 
   
   printf("   ----------------------------------\n");    // labels 
   printf("     1  2  3  4  5  6  7  8  9  10 10+\n");
   printf("\t Number of Characters\n\ns");
   
   /*testing
   printf("\n\n");
   for(i=0;i < maxlength; i++)
   {
    printf("%d", wordlength[i]);   
   }*/
    return 0;
} // end main
