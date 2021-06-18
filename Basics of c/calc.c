//Simple calculator 
#include <stdio.h>

int main()
{   
    double first,second;
    char op;
    printf("Enter the operator");
    scanf("%c",&op);
    scanf("%lf%lf",&first,&second);
    
    switch(op)
    {
        case '+':
            printf("%.1lf+%.1lf=%.1lf",first,second,first+second);
            break;
        case '-':
            printf("%.1lf-%.1lf=%.1lf",first,second,first-second);
            break;
        case '*':
            printf("%.1lf*%.1lf=%.1lf",first,second,first*second);
            break;
        case '/':
            printf("%.1lf/%.1lf=%.1lf",first,second,first/second);
            break;
        default:
            printf("Enter the correct operator");
    }
    return 0;
}