#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] <= 10)
        {
            printf("A[%d] = %d\n", i, array[i]);
        }
    }
    return 0;
}