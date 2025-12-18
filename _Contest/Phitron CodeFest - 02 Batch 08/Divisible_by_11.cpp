#include <stdio.h>
#include <string.h>

int main()
{
    char a[100005];
    scanf("%s", a);

    int n = strlen(a);
    int odd_total = 0, even_total = 0;

    int pos = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        int digit = a[i] - '0';
        if (pos % 2 == 1)
            odd_total += digit;
        else
            even_total += digit;

        pos++;
    }

    int diff = odd_total - even_total;
    if (diff % 11 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
