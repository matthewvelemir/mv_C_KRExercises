/* 
 * File:   Chp1Dm1_5.c 
 * Author: matthewvelemir      
 * Description: book demo counts 'words' in input and lines and chars          
 * K&R First Edition
 */

#include <stdlib.h>
#include <stdio.h>


#define YES 1
#define NO 0 

int chp1wordcount(void)
{
   int c, nl, nw, nc, inword; 
   
   inword = NO;
   nl=nw=nc=0;
   
   while ( (c=getchar()) !=EOF)   // CTRL D for EOF
   {
       ++nc;
       
       if (c == '\n')
       {
           ++nl;
       } // newline if
       
       if (c == ' ' || c == '\n' || c =='\t')
       {
        inword = NO;   
       } // inword if 
       else if ( inword == NO)
       {
           inword = YES; 
           ++nw; 
      } // else if 
      
   }// end while
   
    printf("Lines: %d Words: %d Chars: %d\n",nl,nw,nc);
    return 0;
  }// end main

