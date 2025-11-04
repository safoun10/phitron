#include <stdio.h>
#include <string.h>

int main()
{
    char array[101];

    while (fgets(array, 101, stdin) != NULL)
    {
        int alpha[27] = {0};

        for (int i = 0; i < strlen(array); i++)
        {
            alpha[array[i] - 'a']++;
        }

        for (int i = 0; i <= 26; i++)
        {
            if (alpha[i] > 0)
            {
                for (int j = 0; j < alpha[i]; j++)
                {
                    printf("%c", i + 97);
                }
            }
        }
        printf("\n");
    }

    return 0;
}