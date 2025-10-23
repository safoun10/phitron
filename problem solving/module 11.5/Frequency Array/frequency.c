#include <stdio.h>
#include <string.h>

int main()
{
    int limit, max;
    scanf("%d", &limit);
    scanf("%d", &max);

    int array[limit], check[max];

    for (int i = 1; i <= max; i++)
    {
        check[i] = 0;
    }

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        check[array[i]]++;
    }

    for (int i = 1; i <= max; i++)
    {
        printf("%d\n", check[i]);
    }

    return 0;
}