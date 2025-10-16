#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int array[limit];

    scanf("%d", &array[0]);
    int max = array[0];

    for (int i = 1; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf("%d", max);

    return 0;
}