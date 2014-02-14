/* 
 * File:   Chp1Ex1_6.c 
 * Author: matthewvelemir
 * Description: Copy input to output.  Count spaces, tabs, newlines. 
 * K&R First Edition            
 */

#include <stdlib.h>
#include <stdio.h> 

int ioexercise1_6(void)
{

    int inputc;
    double numline, numchar, numtab, numblank;
    
    numline = numchar = numtab = numblank = 0; 
    
    while( (inputc = getchar()) != EOF) 
    {
        if (inputc == '\n') 
        {
            ++numline;
            //--numchar count carriage return 
        } // end newline if
        
        if (inputc == '\t')
        {
            ++numtab;
        } // end tab if
        
        if (inputc == ' ')
        {
            ++numblank;
        } // end blank if 
        
        ++numchar; 
        
        printf("%c", inputc);
        
    
        
        
    } // end while 1
    
    // output 
    
    printf("\n"); 
    
    printf("Number of lines:  %.0f \n", numline);
    printf("Number of chars:  %.0f \n", numchar);
    printf("Number of blanks: %.0f \n", numblank);
    printf("Number of tabs:   %.0f \n", numtab);
    
    
    return 0;
    
}  // end main 



