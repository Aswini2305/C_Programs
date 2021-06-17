//sum of n natural numbers using while statement

#include<stdio.h>
int
main ()
{
  int sum, i, n;
  scanf ("%d", &n);
  while (i <=n)
    {
      sum += i;
      i++;
    }
  printf ("Sum of %d is %d:", n, sum);
}
