//Leap year using nested if..else
#include <stdio.h>
int find_year(int);
int main()
{
   int year,result;
   scanf("%d",&year);
   result=find_year(year);
   if(result==1)
   {
       printf("%d is leap year",year);
   }
   else{
       printf("%d is not leap year",year);
   }
   return 0;
}

int find_year(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}