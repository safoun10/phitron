// return + parameter
// return + no parameter
// no return + parameter
// no return + no parameter

#include <stdio.h>
#include <string.h>

int sum(int a, int b) // return + parameter
{
    scanf("%d %d", &a, &b);
    return a + b;
}

int add() // return + no parameter
{
    int a = 5, b = 8;
    return a + b;
}

int avg(int a, int b, int c, int d) // no return + parameter
{
    scanf("%d %d %d %d", &a, &b, &c, &d);
    float sum = a + b + c + d;
    printf("%.2f\n", sum / 4);
    return 0;
}

void name() // no return + no parameter
{
    printf("safoun");
}

int main()
{
    int a, b, c, d;

    printf("%d\n", sum(a, b)); // return + parameter
    printf("%d\n", add());     // return + no parameter
    avg(a, b, c, d);           // no return + parameter
    name();                    // no return + no parameter

    return 0;
}