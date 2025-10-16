#include <stdio.h>

int main()
{
    int limit, index;
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

    for (int i = 0; i < limit; i++)
    {
        if (array[i] == min)
        {
            index = i;
            break;
        }
    }

    printf("%d %d", min, index + 1);

    return 0;
}