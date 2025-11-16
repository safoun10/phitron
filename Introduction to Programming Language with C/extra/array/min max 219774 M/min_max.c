#include <stdio.h>

int main()
{
    int limit, min = 1000000, min_index = 0, max = -1000000, max_index, temp = 0;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] < min)
        {
            min = array[i]; 
            min_index = i;
        }

        if (array[i] > max)
        {
            max = array[i];
            max_index = i;
        }
    }

    array[max_index] = temp;
    array[min_index] = max;
    array[max_index] = min;

    for (int i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}