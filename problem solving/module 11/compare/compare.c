#include <stdio.h>
#include <string.h>

int main()
{
    char x[21];
    char y[21];

    scanf("%s", x);
    scanf("%s", y);

    if (strcmp(x, y) <= 0)
    {
        printf("%s", x);
    }
    else
    {
        printf("%s", y);
    }

    return 0;
}