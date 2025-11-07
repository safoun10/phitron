#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even()
{
    int limit;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    int even = 0, odd = 0;

    for (int i = 0; i < limit; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d %d", even, odd);
}

int main()
{
    odd_even();
    return 0;
}