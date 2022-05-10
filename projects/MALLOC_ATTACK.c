#include <stdio.h>   
#include <stdlib.h> 
 
int main(void) 
{
    int x = 2048;
    int *p;
    p = (int *)malloc(x);
    while (1==1)
        {
        p = (int *)realloc(*p, x);
        printf(sizeof(p));
        printf("Run complete \n");
    }
    
}
