//find vowel and consonant 
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    if(c =='a'|| c =='A'||c =='e'||c =='E'||c =='i'||c =='I'||c =='o'||c =='0'||c =='u'||c =='U')
    {
        printf("%c is vowel",c);
    }
    else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
        printf("%c is consonant",c);
    }
    else
    {
        printf("%c is not an alphabet",c);
    }
}