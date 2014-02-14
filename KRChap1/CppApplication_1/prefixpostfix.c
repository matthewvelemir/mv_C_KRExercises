#include <stdlib.h>
#include <stdio.h>

int prepost(void)
{
    int i,j,k,m; 
    
    i=m=10;
    j=++i;
    k=m++;
    
    printf("i: %d ++i: %d m++: %d m: %d", i,j,k,m);


    return 0;    
}
