#include <stdio.h>

int main()
{
    char str[100];
    int key,i=0,l;
    printf("Enter the plain text:");
    gets(str);
    printf("Enter the key:");
    scanf("%d",&key);
    
    if(key<=0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        while(str[i]!='\0')
        {
            if(str[i]>=65 && str[i]<=90)
            {
                if(str[i]+key<=90)
                {
                    str[i]=str[i]+key;
                }
                else
                {
                    l=(str[i]+key)- 90;//119+10=129-90=39
                    str[i]=l+ 64 ;  //39+64=103
                }
            }
            else if(str[i]>=97 && str[i]<=122)
            {
                if(str[i]+key<=122)
                {
                    str[i]=str[i]+key;
                }
                else
                {
                    l=(str[i]+key) - 122;
                    str[i]=l+ 96;
                }
            }
            else if(str[i]>=48 && str[i]<=57)
            {
                if(str[i]+key<=57)
                {
                    str[i]=str[i]+key;
                }
                else
                {
                    l=(str[i]+key) - 57;
                    str[i]=l+ 47;
                }
            }
        i++;
        }
        printf("The Encrypted text is:%s",str);
    }

    return 0;
}
