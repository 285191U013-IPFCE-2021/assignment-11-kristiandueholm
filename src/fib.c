/*
 * Fibonacci numbers defined recursively
 */
#include "..\include\fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    if (n == 1)
    {
        return p;
    }
    else if (n == 2)
    {
        return pp;
    }
    else
    {
        return fib(n-1, pp, pp + p);
    }
}