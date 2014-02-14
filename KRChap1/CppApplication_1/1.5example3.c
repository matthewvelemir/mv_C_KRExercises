
#include <stdlib.h>
#include <stdio.h>

#define EOI 48   // ascii value of 0 as I can't enter a null value to end the program. CTRL + D apparently is the correct way to use EOF.


int io1(void)
{
    int inputc;
    int nl;   // number of characters
    float numc; 
   
    
   /* inputc = getchar();
    
    while( inputc != EOI) {
        putchar(inputc);
        inputc = getchar(); 
    } // end while
    
    inputc = 0; */
   
    // more concise 
    
     nl = 0 ;
     numc = 0 ;
     
    while ((inputc = getchar()) != EOI)
    {
        if (inputc == '\n')  // 'A' with single quotes is the character constant A.  Regardless of machine's character set. 
        {   
            ++nl;
            --numc; // I don't want to count carriage returnss
        }       
       //putchar(inputc);
        ++numc;
        printf("%c", inputc);
        
                // the printf interrupts the putc.  Every 'enter' counts as a new line
        
        
    } // end while 2
     printf("Line number: %d\n", nl);
     printf("Characters: %.0f\n", numc);
     
    return 0;
    
} // end io1 

