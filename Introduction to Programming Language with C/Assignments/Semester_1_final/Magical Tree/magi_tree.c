#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit, star_count = 1;
    scanf("%d", &limit);

    int times = 5 + (limit / 2) + 1;

    for (int i = 1; i <= times; i++)
    {
        for (int space_before = times - 1; space_before >= i; space_before--)
        {
            printf(" ");
        }

        for (int star = 1; star <= star_count; star++)
        {
            printf("*");
        }

        printf("\n");
        star_count += 2;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= limit; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}