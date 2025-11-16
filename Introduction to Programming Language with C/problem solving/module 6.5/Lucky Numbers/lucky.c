#include <stdio.h>

int main()
{
    int number, first, second;
    scanf("%d", &number);
    first = number / 10;
    second = number % 10;
    if (number % 10 == 0)
    {
        printf("YES");
    }
    else if (first % second == 0 || second % first == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}