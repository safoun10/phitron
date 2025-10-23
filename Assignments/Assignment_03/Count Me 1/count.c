#include <stdio.h>
#include <string.h>

int main()
{
    int limit, divide_2 = 0, divide_3 = 0;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
        {
            divide_2++;
        }
        else if (array[i] % 3 == 0)
        {
            divide_3++;
        }
    }

    printf("%d %d", divide_2, divide_3);
    return 0;
}