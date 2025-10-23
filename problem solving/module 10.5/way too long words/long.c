#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    char word[101];
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%s", word);
        if (strlen(word) <= 10)
        {
            printf("%s\n", word);
        }
        else
        {
            printf("%c%d%c\n", word[0], (strlen(word) - 2), word[strlen(word) - 1]);
        }
    }

    return 0;
}