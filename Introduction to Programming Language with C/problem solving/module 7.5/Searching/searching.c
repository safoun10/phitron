#include <stdio.h>

int main()
{
    int limit, search, check = 0;
    scanf("%d", &limit);

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    scanf("%d", &search);

    for (int i = 0; i < limit; i++)
    {
        if (array[i] == search)
        {
            printf("%d", i);
            check++;
            break;
        }
    }
    if (check == 0)
    {
        printf("-1");
    }
    
    return 0;
}