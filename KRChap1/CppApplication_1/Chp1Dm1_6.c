/* 
 * File:   Chp1Dm1_6.c 
 * Author: matthewvelemir      
 * Description: Program to count digits, whitespace, and other character inputs.
 * First introduction of arrays for this text.        
 * K&R First Edition
 */

#include <stdlib.h>
#include<stdio.h>

int chp1arraycount(void)
{
    int c, i, nwhite, nother; 
    int ndigit[10];
    
    nwhite = nother = 0;
    for ( i = 0; i < 10; ++i)
        ndigit[i] = 0; 
    
    while ((c = getchar()) !=EOF )
    {
        if (c >= '0' && c<= '9')
            ++ndigit[c-'0'];
        else if ( c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else 
            ++nother; 
        
    }// end while 
    
    printf("digits =");
    
    for (i = 0; i <10; ++i)
        printf(" %d", ndigit[i]);
    printf("\nwhitespace = %d, other =%d\n", nwhite, nother);
    
    return 0;
}//end main 
