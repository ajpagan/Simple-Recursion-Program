#include <stdio.h>
#include "main6.h"

int main(int argc, char *argv[])
{
    double length = -1;
    int cost = 0;
    char extra;

    printf("In miles, how long is the road?\n");
    while(length < 0)
    {
        if(scanf("%lf", &length) == 1)
        {

            if(length < 0)
            {
                printf("Please enter a positive number\n");
            }
        }
        else
        {
            printf("Please enter a number\n");
        }

        extra = getchar();
        while(extra != '\n')
        extra = getchar();
    }

    cost = costOfPainting(length);

    if(cost != -1)
    {
        printf("To paint %.2f miles it will cost $%d.\n",length, cost);
    }
    else
    {
        printf("Negative number was sent to cost of painting function.\n");
    }

    return 1;
}