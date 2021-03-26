
#include<stdio.h>
int main()
{
    int ni,ne,in_price=18,out_price=12,i;
    float cost=0,temp;
    scanf("%d%d",&ni,&ne);
    if(ni<0||ne<0)
    {
        printf("Invalid Input");
    }
    else if(ni==0||ne==0)
    {
        printf("Total estimated cost is 0");
    }
    else
    {
        for(i=0;i<ni;i++)
        {
            scanf("%f",&temp);
            cost=cost+temp*in_price;
            
        }
        for(i=0;i<ne;i++)
        {
            scanf("%f",&temp);
            cost=cost+temp*out_price;
            
        }
    } printf("Estimated cost is :%1.f INR",cost);
    return 0;
}