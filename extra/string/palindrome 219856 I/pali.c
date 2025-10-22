#include <stdio.h>
#include <string.h>

int main()
{
    char string[1001];
    int even_i = 0, exist = 0, size;
    scanf("%s", string);

    size = strlen(string);

    even_i = size / 2;

    int i, j;
    for (i = 0, j = size - 1; i < even_i && j >= even_i; i++, j--)
    {
        if (string[i] != string[j])
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