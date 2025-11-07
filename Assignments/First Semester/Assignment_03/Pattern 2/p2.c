#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int limit, num = 1;
    scanf("%d", &limit);

    for (int i = limit; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }

        for (int j = num; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        num++;
    }

    return 0;
}