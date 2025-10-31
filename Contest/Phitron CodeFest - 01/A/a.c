#include <stdio.h>
#include <string.h>

int main()
{
    char first[1001] = {0};
    char second[1001] = {0};
    char temp[1001] = {0};
    int a, b;

    scanf("%s", first);
    scanf("%s", second);
    scanf("%d %d", &a, &b);

    int j;
    for (int i = a, j = 0; i <= b; i++, j++)
    {
        temp[j] = second[i];
    }
    temp[b - a + 1] = '\0';

    strcat(first, temp);
    printf("%s", first);

    return 0;
}
