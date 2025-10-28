#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }

    return 0;
}