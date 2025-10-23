#include <stdio.h>
#include <string.h>

int main()
{
    int size, number, sum = 0;
    scanf("%d", &size);

    char num[size];
    scanf("%s", num);

    for (int i = 0; i < size; i++)
    {
        sum += (num[i] - '0');
    }
    printf("%d", sum);

    return 0;
}