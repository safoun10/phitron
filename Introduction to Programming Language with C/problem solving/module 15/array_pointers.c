#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned short array[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    for (int i = 0; i < 9; i++)
    {
        printf("%p\n", &array[i]);
    }

    return 0;
}