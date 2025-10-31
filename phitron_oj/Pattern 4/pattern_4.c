#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*", j);
        }
        printf("\n");
    }

    return 0;
}
