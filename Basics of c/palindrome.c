//find the number is palindrome or not

#include <stdio.h>

int main()
{
    int original_num,reversed_num=0,n,rem;
    scanf("%d",&n);
    original_num=n;
    while(n!=0)
    {
        rem=n%10;
        reversed_num=reversed_num*10+rem;
        n=n/10;
        
    }
    if(original_num==reversed_num)
        printf("Number is palindrome");
    else
        printf("Number is not palindrome");
    return 0;
}
