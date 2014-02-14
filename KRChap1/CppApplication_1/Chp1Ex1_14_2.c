/* 
 * File:  Chp1Ex1_14_2.c 
 * Author: matthewvelemir      
 * Description: Program to count the character's frequency in the input.
 * It's not part of the exercise, or cross-character set compatible, but I found
 *  it much nicer to read a chart with the characters rather than just the character set values.
 * K&R Second Edition
 */

#include <stdlib.h>
#include <stdio.h>

#define CharSetMax 256   // I was going to do a running count of the charactes 
                         // using the last index in the array.  
int ioexercise1_14_2(void)
{
    int inputc,i,j;
    int cOccur[CharSetMax];
       
    for (i=0;i <= CharSetMax; i++)
    {
        cOccur[i]=0;
        
    }// for
    
    while( (inputc=getchar()) != EOF)
    {
        ++cOccur[inputc];
      
    }// input while
    
    printf("\n\n");
    printf("Charset\t\t  Occurences\n Value\n");
    
    for (i=0;i < CharSetMax; i++)
    {
        if (cOccur[i] != 0)
        {
              printf("%3.0d  ",i); // print the charset value
              if  ( i >= 33)       // characters > 33 can be displayed (in ascii)
              {                   
                  printf(" %c \t |",i);
              }
              else
              {
                  printf(" \t\t |");
              } // ascii displayable characters if else branch
              for (j=1; j <= cOccur[i]; j++)
              {    
                  printf("]");
              } // output for
              printf("\n");
        }// if the char was used need to display it
    
    }//output for
   
    return 0;
}//end main

