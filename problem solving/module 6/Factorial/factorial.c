#include <stdio.h>

int main()
{
    int limit, input;
    long long result = 1;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &input);
        if (input == 0)
        {
            result = 1;
        }
        else
        {

            for (int j = 1; j <= input; j++)
            {
                result *= j;
            }
        }
        printf("%lld\n", result);
        result = 1;
    }

    return 0;
}