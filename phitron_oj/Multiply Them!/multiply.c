#include <stdio.h>

int main()
{
    unsigned short a, b;
    scanf("%hu\n%hu", &a, &b);
    printf("%hu", (a * b));
    return 0;
}