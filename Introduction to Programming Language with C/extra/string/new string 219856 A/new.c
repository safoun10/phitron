#include <stdio.h>
#include<string.h>

int main()
{
    char first[1001], second[1001];
    scanf("%s", first);
    scanf("%s", second);
    printf("%d %d\n%s %s", strlen(first), strlen(second), first, second);

    return 0;
}