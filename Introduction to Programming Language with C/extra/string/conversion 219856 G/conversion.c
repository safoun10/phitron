#include <stdio.h>
#include <string.h>

int main()
{
    char string[100001];
    scanf("%s", string);
    int len = strlen(string);

    for (int i = 0; i < len; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] -= ' ';
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] += ' ';
        }
        else if (string[i] == ',')
        {
            string[i] = ' ';
        }
    }

    printf("%s", string);
    return 0;
}