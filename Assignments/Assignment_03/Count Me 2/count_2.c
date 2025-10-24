#include <stdio.h>
#include <string.h>

int main()
{
    char word[100001], vowel[6] = {'a', 'e', 'i', 'o', 'u'};
    int count = 0, found = 0;

    scanf("%s", word);
    for (int i = 0; i < strlen(word); i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (word[i] == vowel[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            count++;
        }
        found = 0;
    }
    printf("%d", count);

    return 0;
}