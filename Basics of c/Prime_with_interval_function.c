//C Program to Display Prime Numbers Between Intervals Using Function
#include<stdio.h>
int checkPrime(int n1);
int main()
{
    int i,flag,n1,n2;
    scanf("%d %d",&n1,&n2);
    for(i=n1+1;i<n2;++i)
    {
        flag=checkPrime(i);
        
        if(flag==1)
            printf("%d ",i);
    }
    return 0;
}
int checkPrime(int n)
{
    int j,flag=1;
    for(j=2;j<=n;++j)
    {
        if(n%j==0)
            flag=0;
            break;
    }
    return flag;
}