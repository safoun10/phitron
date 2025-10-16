#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    if (limit > 0)
    {
        for (int i = 1; i <= limit; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = limit; i <= 0; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}