#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int count;
    scanf("%d", &count);

    for (int j = 1; j <= count; j++)
    {
        int limit;
        scanf("%d", &limit);

        int array_a[limit];
        int array_b[limit];
        int array_c[limit];

        for (int i = 0; i < limit; i++)
        {
            scanf("%d", &array_a[i]);
            array_b[i] = array_a[i];
        }

        int swap = 0;

        for (int i = 0; i < limit - 1; i++)
        {
            for (int k = i + 1; k < limit; k++)
            {
                if (array_b[i] > array_b[k])
                {
                    swap = array_b[i];
                    array_b[i] = array_b[k];
                    array_b[k] = swap;
                }
            }
        }

        for (int i = 0; i < limit; i++)
        {
            int value = abs(array_a[i] - array_b[i]);
            array_c[i] = value;
        }

        for (int i = 0; i < limit; i++)
        {
            printf("%d ", array_c[i]);
        }
        printf("\n");
    }

    return 0;
}