#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int array_1[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array_1[i]);
    }

    int array_2[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array_2[i]);
    }

    int array_reversed[limit];
    for (int i = 0; i < limit; i++)
    {
        array_reversed[i] = array_2[limit - i - 1];
    }

    int array_sum[limit];
    for (int i = 0; i < limit; i++)
    {
        array_sum[i] = array_1[i] + array_reversed[i];
        printf("%d ", array_sum[i]);
    }

    return 0;
}