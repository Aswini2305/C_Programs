#include<stdio.h>
int main()
{
    int n,x=0,y=0,distance=10;
    char ch='R';
    scanf("%d",&n);
    while(n)
    {
        switch(ch)
        {
            case 'R':
            x=x+10;
            ch='U';
            distance=distance+10;
            break;
            
            case 'U':
            y=y+20;
            ch='L';
            distance=distance+10;
            break;
            
            case 'L':
            x=x-30;
            ch='D';
            distance=distance+10;
            break;
            
            case 'D':
            y=y-40;
            ch='A';
            distance=distance+10;
            break;
            
            case 'A':
            x=x+distance;
            ch='R';
            distance=distance+10;
            break;
        }
        n--;
        
    }
    printf("%d %d",x,y);
    return 0;

}