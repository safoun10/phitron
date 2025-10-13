#include <stdio.h>

int main()
{
    int limit, input, max = 0;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &input);
        if (input > max)
        {
            max = input;
        }
    }
    printf("%d", max);
    return 0;
}