#include <stdio.h>

int main()
{
    int limit, input;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &input);
        do
        {
            printf("%d ", input % 10);
            input /= 10;
        } while (input != 0);
        printf("\n");
    }

    return 0;
}