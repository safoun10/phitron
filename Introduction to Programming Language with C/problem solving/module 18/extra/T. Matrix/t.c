#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int row;
    scanf("%d", &row);
    int array_2d[row][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &array_2d[i][j]);
        }
    }

    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == j)
            {
                primary += array_2d[i][j];
            }

            if (i + j == row - 1)
            {
                secondary += array_2d[i][j];
            }
        }
    }

    printf("%d", abs(primary - secondary));

    return 0;
}