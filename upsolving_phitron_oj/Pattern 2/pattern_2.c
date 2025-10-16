#include <stdio.h>

int main()
{
    int limit, limit_2;
    scanf("%d", &limit);

    limit_2 = limit;
    for (int i = 1; i <= limit; i++)
    {
        for (int j = limit_2; j >= 1; j--)
        {
            printf("%d ", j);
        }
        limit_2--;
        printf("\n");
    }

    return 0;
}