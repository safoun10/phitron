#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    int m;
    for (int i = limit - 1, m = 1; i >= 1, m < limit; i--, m++)
    {
        for (int k = 1; k <= m; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}