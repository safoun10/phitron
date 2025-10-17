#include <stdio.h>

int main()
{
    int limit, max = -1000000, runner_up = -1000000, existence = 0;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    for (int i = 0; i < limit; i++)
    {
        if (array[i] == max)
        {
            continue;
        }
        else if (array[i] > runner_up)
        {
            runner_up = array[i];
            existence++;
        }
    }

    if (existence == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d", runner_up);
    }
    return 0;
}

//unsolved