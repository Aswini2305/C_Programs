// Largest among three numbers
//Using conditional operators
#include <stdio.h>

int main()
{
    int a,b,c,small,large;
    printf("Enter any three numbers");
    scanf("%d%d%d",&a,&b,&c);
    small = (a<b?(a<c?a:c):(b<c?b:c));
    large = (a>b?(a>c?a:c):(b>c?b:c));
    printf("\nThe largest number is %d",large);
    printf("\nThe smallest number is %d",small);
    return 0;
}
