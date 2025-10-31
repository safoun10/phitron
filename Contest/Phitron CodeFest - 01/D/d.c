#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    char number[1001];
    int digits[1001];
    int total = 0;

    scanf("%s", number);

    for (int i = 0; i < limit; i++)
    {
        digits[i] = number[i] - '0';
        total += digits[i];
    }

    if (total % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}