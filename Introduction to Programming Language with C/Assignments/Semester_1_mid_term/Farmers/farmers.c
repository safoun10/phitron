#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    double first_men, add_men, days, total_labour = 0.0, result = 0.0;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        scanf("%lf %lf %lf", &first_men, &add_men, &days);
        total_labour = first_men + add_men;
        double new_days = (int)((first_men * days) / total_labour);
        result = days - new_days;
        printf("%d\n", (int)result);
    }
    return 0;
}