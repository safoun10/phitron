#include <stdio.h>

int main()
{
    int limit, x, y, small, large, result = 0;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            small = y + 1;
            large = x;
        }
        else
        {
            small = x + 1;
            large = y;
        }

        if (small == large)
        {
            result = 0;
        }

        for (int j = small; j < large; j++)
        {
            if (j % 2 != 0)
            {
                result += j;
            }
        }

        printf("%d\n", result);

        // reset
        small = 0;
        large = 0;
        result = 0;
    }

    return 0;
}