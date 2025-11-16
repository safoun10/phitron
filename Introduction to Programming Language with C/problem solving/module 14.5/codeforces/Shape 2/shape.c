#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int limit, star = 1;
    scanf("%d", &limit);

    for (int i = limit; i >= 1; i--)
    {

        for (int j = i - 1; j >= 1; j--)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
    }

    return 0;
}