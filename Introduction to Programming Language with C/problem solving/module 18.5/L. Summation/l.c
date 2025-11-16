#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void sum(int array[], int limit, long long total)
{
    if (limit - 1 < 0)
    {
        printf("%lld", total);
        return;
    }
    total += array[limit - 1];
    sum(array, limit - 1, total);
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

    sum(array, limit, 0);
    return 0;
}