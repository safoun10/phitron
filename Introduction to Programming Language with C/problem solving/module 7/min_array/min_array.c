#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int array[limit];

    scanf("%d", &array[0]);
    int min = array[0];

    for (int i = 1; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("%d", min);

    return 0;
}