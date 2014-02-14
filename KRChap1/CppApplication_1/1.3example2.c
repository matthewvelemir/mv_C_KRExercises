
/* 
 * File:   main.c
 * Author: Mojo
 *
 * Created on January 9, 2014, 7:40 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main2 (void) 
{
    const int lower = 0;        /* lower limit of table */
    const int upper = 300;      /* upper limit */
    const int step = 20;         /*increment size */
    
    float fahr, cels; 
    
    fahr = cels = 0; 
    
    //lower = 0;   /* lower limit of table */
    //upper = 300; /* upper limit */
    //step = 20;   /*increment size */
    
    fahr = lower; 
    printf("fahr \t cels \n");
    while (fahr <= upper) {
        cels = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f \t %6.1f\n",fahr, cels);
        fahr = fahr + step;
        
    }  // while
    
    
    printf("\n\n");
    
    // alternative
    
    for (fahr=lower; fahr <=upper; fahr= fahr+step)
        printf("%4.0f \t %6.1f\n", fahr, (5.0 /9.0)*(fahr-32));
          
      printf("\n\n");
    
    for (fahr=upper; fahr >=lower; fahr=fahr-step)
        printf("%4.0f \t %6.1f\n", fahr, (5.0/ 9.0)*(fahr-32));
    
    
 return 0;       
} //main2 
