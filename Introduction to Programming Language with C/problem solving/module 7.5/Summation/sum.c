#include <stdio.h>

int main()
{
    int limit;
    long long sum = 0;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    if (sum < 0)
    {
        printf("%lld", sum * -1);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}