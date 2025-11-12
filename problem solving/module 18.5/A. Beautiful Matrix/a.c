#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int array_2d[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &array_2d[i][j]);
        }
    }

    int row = 0, column = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array_2d[i][j] == 1)
            {
                row = i;
                column = j;
            }
        }
    }
    int result = abs(2 - row) + abs(2 - column);
    printf("%d", result);
    return 0;
}