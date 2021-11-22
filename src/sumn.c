#include "..\include\sumn.h"

#include<stdio.h>

int sumn (int n)
{
    int sum;
    if (n > 1)
    {
        sum = (2 * n - 1) + sumn(n - 1);
    }
    else
    {
        sum = 1;
    }

    return sum;
}