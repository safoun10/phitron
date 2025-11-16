#include <stdio.h>

int main()
{
    unsigned short a, b;
    scanf("%hu %hu", &a, &b);
    if (a % b == 0 || b % a == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}