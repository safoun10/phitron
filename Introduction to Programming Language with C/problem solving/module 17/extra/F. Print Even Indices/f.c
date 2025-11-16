#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void even_check(int array[], int limit)
{
    for (int i = limit - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", array[i]);
        }
    }
}

int main()
{
    int limit;
    scanf("%d", &limit);
    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    even_check(array, limit);
    return 0;
}