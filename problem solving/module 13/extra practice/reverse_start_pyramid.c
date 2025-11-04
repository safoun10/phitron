#include <stdio.h>
#include <string.h>

int main()
{
    int limit, space = 1;
    scanf("%d", &limit);

    for (int i = limit; i >= 1; i--)
    {
        for (int j = 1; j < space; j++)
        {
            printf(" ");
        }
        space++;

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}