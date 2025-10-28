#include <stdio.h>

int main()
{
    int limit, max = 0;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] > max)
        {
            max = array[i];
        }
    }

    for (int i = 0; i < limit; i++)
    {
        printf("%d ", max - array[i]);
    }

    return 0;
}