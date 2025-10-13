#include <stdio.h>

int main()
{
    int limit, count = 0;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("-1");
    }

    return 0;
}