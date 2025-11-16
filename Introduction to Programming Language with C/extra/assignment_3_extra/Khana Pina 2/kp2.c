#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    if (limit % 3 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}