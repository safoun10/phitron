#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] == 0)
        {
            printf("0 ");
        }
        else if (array[i] > 0)
        {
            printf("1 ");
        }
        else if (array[i] < 0)
        {
            printf("2 ");
        }
    }

    return 0;
}