#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int limit, stars = 1;
    scanf("%d", &limit);

    for (int i = limit; i >= 1; i--)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            printf(" ");
        }

        for (int j = 1; j <= stars; j++)
        {
            printf("*");
        }

        printf("\n");
        stars++;
    }

    return 0;
}