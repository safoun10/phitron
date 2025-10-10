#include <stdio.h>

int main()
{
    int limit, left;
    scanf("%d", &limit);

    if (limit <= 1000)
    {
        printf("Bad luck!");
    }
    else
    {
        printf("I will buy Punjabi\n");
        left = limit - 1000;
        if (left >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }

    return 0;
}