//To find the quotient and remainder
#include<stdio.h>
int main()
{
    int divisor,divident,quotient, remainder1;
    printf("Enter the divident and divisor:\n");
    scanf("%d%d",&divident,&divisor);
    quotient=divident/divisor;
    remainder1=divident%divisor;
    printf("quotient:%d\nremainder:%d",quotient,remainder1);
    
}