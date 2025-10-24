#include <stdio.h>
#include <string.h>

int main()
{
    int limit, lowercase = 0, uppercase = 0, number = 0;
    char word[10001];
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        scanf("%s", word);
        for (int j = 0; j < strlen(word); j++)
        {
            if (word[j] >= 65 && word[j] <= 90)
            {
                uppercase++;
            }
            else if (word[j] >= 97 && word[j] <= 122)
            {
                lowercase++;
            }
            else if (word[j] >= 48 && word[j] <= 57)
            {
                number++;
            }
        }
        printf("%d %d %d\n", uppercase, lowercase, number);
        // reset
        uppercase = 0;
        lowercase = 0;
        number = 0;
    }

    return 0;
}