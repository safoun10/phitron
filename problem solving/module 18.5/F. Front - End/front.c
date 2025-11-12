#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    int turn = 1, index = 0;
    for (int i = 0; i < limit; i++)
    {
        if (turn % 2 != 0)
        {
            printf("%d ", array[index]);
            index++;
            turn++;
        }
        else
        {
            printf("%d ", array[limit - index]);
            turn++;
        }
    }
    return 0;
}