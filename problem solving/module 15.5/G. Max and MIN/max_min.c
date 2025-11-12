#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max_min(int array[], int limit)
{
    int min = 100001;
    int max = 0;
    for (int i = 0; i < limit; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("%d %d", min, max);
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

    max_min(array, limit);

    return 0;
}