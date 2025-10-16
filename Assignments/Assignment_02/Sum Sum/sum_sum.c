#include <stdio.h>

int main()
{
    int limit, positive_sum = 0, negative_sum = 0;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > 0)
        {
            positive_sum += array[i];
        }
        else if (array[i] < 0)
        {
            negative_sum += array[i];
        }
    }
    printf("%d %d", positive_sum, negative_sum);

    return 0;
}