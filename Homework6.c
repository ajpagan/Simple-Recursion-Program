#include <stdio.h>
int costOfPainting(double length)
{
    int cost = 0;

    if(length > 2)
    {
        length = length / 3;
        cost = (3 * costOfPainting(length)) + 100;
    }

    else
    {
        cost = cost + 200;
    }

    return cost;
}

