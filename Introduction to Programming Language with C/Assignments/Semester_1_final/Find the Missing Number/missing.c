#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    long long target, a, b, c;
    for (int i = 1; i <= limit; i++)
    {
        scanf("%lld %lld %lld %lld", &target, &a, &b, &c);

        double multiplied = a * b * c;
        double result = target / multiplied;
        double rounded = ceil(result);
        double check = rounded - result;

        if (target == 0)
        {
            printf("0\n");
        }
        else if (check > 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%.0lf\n", result);
        }
    }

    return 0;
}