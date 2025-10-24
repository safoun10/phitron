#include <stdio.h>
#include <string.h>

int main()
{
    char word[10001], letters[27];
    int count[27];
    scanf("%s", word);

    for (int i = 0; i < 26; i++)
    {
        letters[i] = i + 97;
    }

    for (int i = 0; i < strlen(word); i++)
    {
        count[word[i] - 97]++;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     printf("%c .", letters[i]);
    // }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c - %d\n", letters[i], count[i]);
        }
    }

    return 0;
}