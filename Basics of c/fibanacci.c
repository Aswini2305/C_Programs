//Fibonacci numbers until certian number
#include<stdio.h>
int
main ()
{
 int num,a=0,b=1,c;
 c=a+b;
 scanf("%d",&num);
 printf("%d ,%d ,",a,b);
 while(c<=num)
 {
     printf("%d ,",c);
     a=b;
     b=c;
     c=a+b;
 }
return 0;
}
//Fibonacci numbers for n numbers
#include<stdio.h>
int
main ()
{
 int num,a=0,b=1,c;
 c=a+b;
 scanf("%d",&num);
 printf("%d ,%d ,",a,b);
 for(int i=0;i<num;i++)
 {
     printf("%d ,",c);
     a=b;
     b=c;
     c=a+b;
 }
return 0;
}
