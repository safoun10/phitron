#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int array[], int limit)
{
    int count = 0;

    for (int i = 0; i < limit; i++)
    {
        if (array[i] != 1)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    return count;
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

    printf("%d", count_before_one(array, limit));
    return 0;
}