#include <stdio.h>
#include <string.h>

int main()
{
    int limit, nth;
    scanf("%d", &limit);
    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &nth);
    if (array[nth - 1] == 0)
    {
        array[nth - 1] = 1;
    }
    else
    {
        array[nth - 1] = 0;
    }

    for (int i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}