#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}