#include <stdio.h>
#include <string.h>

int main()
{
    int limit, total = 0;
    scanf("%d", &limit);

    int num[10] = {0};

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        num[array[i]]++;
    }

    for (int i = 1; i <= 9; i++)
    {
        if (num[i] > 0)
        {
            total++;
        }
    }

    printf("%d", total);

    return 0;
}