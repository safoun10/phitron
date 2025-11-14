#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void digits(int array[], int limit)
{
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
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
    digits(array, limit);

    return 0;
}