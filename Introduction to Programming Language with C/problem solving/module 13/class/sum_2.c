#include <stdio.h>
#include <string.h>

int main()
{
    int target;
    scanf("%d", &target);

    int limit;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    int existence = 0;

    for (int i = 0; i < limit - 1; i++)
    {
        for (int j = i + 1; j < limit; j++)
        {
            if (array[i] + array[j] == target)
            {
                printf("%d %d = %d", array[i], array[j], target);
                existence++;
                break;
            }
        }
        if (existence > 0)
        {
            break;
        }
    }

    if (existence == 0)
    {
        printf("no");
    }

    return 0;
}