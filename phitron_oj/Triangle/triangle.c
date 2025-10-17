#include <stdio.h>

int main()
{
    unsigned short a, b, c;
    scanf("%hu %hu %hu", &a, &b, &c);
    if (a == b && a == c)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}