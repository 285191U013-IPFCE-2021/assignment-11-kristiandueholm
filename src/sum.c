#include "..\include\sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  assert(n >= 1);

  // Recursive case:
  if (n > 1)
  {
    return sumtail(n - 1, n + total);
  }

  // Base case:
  // n == 1
  else
  {
    return (1 + total);
  }
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  int sum = 0;
  int i = 1;
  while (i <= n)
  {
    sum += i;
    i++;
  }

  return sum;  
}

