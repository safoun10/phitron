#include <stdio.h>

int main()
{
    int times, result = 0, least = 100000000;
    scanf("%d", &times);

    for (int i = 1; i <= times; i++)
    {
        int limit;
        scanf("%d", &limit);

        int array[limit];
        for (int j = 0; j < limit; j++)
        {
            scanf("%d", &array[j]);
        }

        for (int k = 1; k <= limit; k++)
        {
            for (int l = limit; l >= k; l--)
            {
                if (k < l)
                {
                    result = array[k - 1] + array[l - 1] + l - k;
                    if (result < least)
                    {
                        least = result;
                    }
                }
            }
        }
        printf("%d\n", least);
        // reset
        result = 0;
        least = 100000000;
    }

    return 0;
}