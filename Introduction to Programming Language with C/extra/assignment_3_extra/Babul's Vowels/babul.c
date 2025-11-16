#include <stdio.h>
#include <string.h>

int main()
{
    char character;
    scanf("%c", &character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}