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

    int p_flag = 0, s_flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i != j)
            {
                if (array_2d[i][j] != 0)
                {
                    p_flag++;
                }
            }

            if (i + j != row - 1)
            {
                if (array_2d[i][j] != 0)
                {
                    s_flag++;
                }
            }
        }
    }

    if (p_flag == 0 || s_flag == 0)
    {
        printf("diagonal");
    }
    else
    {
        printf("not");
    }

    return 0;
}