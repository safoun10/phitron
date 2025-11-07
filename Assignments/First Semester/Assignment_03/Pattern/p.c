#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int limit, object = 1, notation = 1, space = 1;
    scanf("%d", &limit);

    int first_half = limit;
    int second_half = limit - 1;

    for (int i = 1; i <= first_half; i++)
    {
        for (int j = first_half - 1; j >= i; j--)
        {
            printf(" ");
        }

        for (int j = 1; j <= object; j++)
        {
            if (notation % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        object += 2;
        notation++;
    }

    for (int i = second_half; i >= 1; i--)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space++;

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}