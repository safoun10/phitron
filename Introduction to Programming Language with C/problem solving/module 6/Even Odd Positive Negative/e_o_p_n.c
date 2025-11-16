#include <stdio.h>

int main()
{
    int limit, input, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &input);
        if (input % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (input > 0)
        {
            positive++;
        }
        else if (input < 0)
        {
            negative++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d", negative);

    return 0;
}