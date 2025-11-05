#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ascii(char letter)
{
    printf("%c", letter + 32);
}

int main()
{
    char letter;
    scanf("%c", &letter);

    ascii(letter);
    return 0;
}