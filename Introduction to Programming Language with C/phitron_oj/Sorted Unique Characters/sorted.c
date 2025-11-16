#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int alpha[27] = {0};

    char array[limit];
    scanf("%s", array);

    for (int i = 0; i < limit; i++)
    {
        alpha[array[i] - 'a']++;
    }

    for (int i = 0; i <= 26; i++)
    {
        if (alpha[i] > 0)
        {
            printf("%c", i + 97);
        }
    }

    return 0;
}