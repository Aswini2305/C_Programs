// Armstrong number
#include <stdio.h>
int main()
{
    int num,original_num,result=0,rem;
    scanf("%d",&num);
    original_num=num;
    while(original_num!=0)
    {
        rem=original_num%10;
        result+=rem*rem*rem;
        original_num/=10;
    }
    if(result==num)
        printf("%d is Armstrong number",num);
    else
        printf("%d is not Armstrong number",num);
    return 0;
}
