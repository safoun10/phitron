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

    int zero_flag = 0, one_flag = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i != j && i + j != row - 1)
            {
                if (array_2d[i][j] != 0)
                {
                    zero_flag++;
                }
            }
            else
            {
                if (array_2d[i][j] == 1)
                {
                    one_flag++;
                }
            }
        }
    }

    bool one_trigger = false;

    if (row % 2 == 0)
    {
        if (one_flag == row + column)
        {
            one_trigger = true;
        }
    }
    else if (row % 2 != 0)
    {
        if (one_flag == (row + column - 1))
        {
            one_trigger = true;
        }
    }

    if (row != column)
    {
        printf("NO\n");
    }
    else if (zero_flag == 0 && one_trigger)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}