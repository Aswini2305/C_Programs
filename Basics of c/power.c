//Calculate power of a number

#include <stdio.h>

int main()
{
    int base,expo;
    long result=1;
    printf("Enter the base and exponential");
    scanf("%d%d",&base,&expo);
    while(expo!=0)
    {
        result*=base;
        --expo;
    }
    printf("%.Ld",result);
    return 0;
}