#include <stdio.h>

int main()
{
    int size = 1000001;
    char string[size];
    fgets(string, size, stdin);

    for (int i = 0; string[i] != '\\'; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}