#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int list(int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        printf("%d", i);
        if (i == limit)
        {
            break;
        }
        printf(" ");
    }
}

int main()
{
    int limit;
    scanf("%d", &limit);

    list(limit);
    return 0;
}