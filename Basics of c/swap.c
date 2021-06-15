//swap without temporary variable
#include <stdio.h>

int main()
{
    int a=10,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n a=%d\t b=%d",a,b);
}
