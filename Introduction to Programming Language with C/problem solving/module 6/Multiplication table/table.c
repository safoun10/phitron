#include <stdio.h>

int main()
{
    int number, product = 0;
    scanf("%d", &number);
    for (int i = 1; i <= 12; i++)
    {
        product = number * i;
        printf("%d * %d = %d\n", number, i, product);
    }

    return 0;
}