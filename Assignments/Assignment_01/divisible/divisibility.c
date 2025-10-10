#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    if (limit % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}