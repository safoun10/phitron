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

    int target;
    scanf("%d", &target);

    int flag = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array_2d[i][j] == target)
            {
                flag++;
            }
        }
    }

    if (flag == 0)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}