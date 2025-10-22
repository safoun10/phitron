#include <stdio.h>
#include <string.h>

int main()
{
    int result = 0;
    char limit[1000001];
    scanf("%s", limit);

    int length = strlen(limit);

    for (int i = 0; i < length; i++)
    {
        result += limit[i] - '0';
    }
    printf("%d", result);

    return 0;
}