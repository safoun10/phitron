#include <stdio.h>
#include <string.h>

int main()
{
    double limit, first_men, last_men, days, total_labour = 0.0, result = 0.0;
    scanf("%lf", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%lf %lf %lf", &first_men, &last_men, &days);
        //////

        total_labour = first_men + last_men;

        result = days - ((first_men * days) / total_labour);

        //////////////
        if (result < 1 && result != 0.0)
        {
            printf("%.0lf\n", 1.0);
        }
        else
        {
            printf("%.0lf\n", result);
        }
    }

    return 0;
}

// unsolved (yet)