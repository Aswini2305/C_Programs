//Prime number 
#include <stdio.h>

int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    for(int i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n==1)
        printf("Number is neither prime nor composite");
    else
    {
        if(flag==0)
            printf("Number is not prime");
        else
            printf("Number is a prime");
    }
    return 0;
}
