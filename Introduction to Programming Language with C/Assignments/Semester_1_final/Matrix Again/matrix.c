#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int array_2d[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array_2d[i][j]);
        }
    }

    for (int j = 0; j < column; j++)
    {
        printf("%d ", array_2d[row - 1][j]);
    }
    printf("\n");

    for (int i = 0; i < row; i++)
    {
        printf("%d ", array_2d[i][column - 1]);
    }

    return 0;
}