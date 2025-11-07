#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char *text)
{
    int mismatch = 0;
    for (int i = 0, j = strlen(text) - 1; i < strlen(text) && j >= 0; i++, j--)
    {
        if (i < j)
        {
            if (text[i] != text[j])
            {
                mismatch++;
            }
        }
    }
    if (mismatch > 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char text[1001];
    scanf("%s", text);
    if (is_palindrome(text) == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}