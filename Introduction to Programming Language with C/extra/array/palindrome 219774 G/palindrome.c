#include <stdio.h>

int main()
{
    int limit, even_i = 0, exist = 0;
    scanf("%d", &limit);

    even_i = limit / 2;

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    int i, j;
    for (i = 0, j = limit - 1; i < even_i && j >= even_i; i++, j--)
    {
        if (array[i] != array[j])
        {
            exist++;
        }
    }
    if (exist > 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}