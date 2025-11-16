#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    int swap = 0;

    for (int i = 0; i < limit - 1; i++)
    {
        for (int j = i + 1; j < limit; j++)
        {
            if (array[i] < array[j])
            {
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }

    for (int i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}