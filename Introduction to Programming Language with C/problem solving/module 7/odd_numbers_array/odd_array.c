#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    int array[limit];

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < limit; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}