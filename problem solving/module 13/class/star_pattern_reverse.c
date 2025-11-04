#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        for (int j = limit; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}