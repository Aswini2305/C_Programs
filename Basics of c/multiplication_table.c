//Multiplication table 
#include<stdio.h>
int
main ()
{
  int fact = 1, n, i=1;
  scanf ("%d", &n);
  if (n <= 0)
    printf ("Oops! we can't find factorial for negative numbers");
  else
    {
      while (i <= n)
	{
	  fact *= i;
	  i++;
	}
    printf ("factorial of %d is %d", n, fact);
        
    }
}
