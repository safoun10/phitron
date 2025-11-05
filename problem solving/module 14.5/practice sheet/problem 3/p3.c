#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ascii(char letter)
{
    printf("%d", letter);
}

int main()
{
    char letter;
    scanf("%c", &letter);

    ascii(letter);
    return 0;
}