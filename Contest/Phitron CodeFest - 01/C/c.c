#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int array[limit];
    int even = 0, odd = 0;

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d", even * odd);

    return 0;
}