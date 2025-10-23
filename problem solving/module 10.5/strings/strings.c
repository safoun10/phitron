#include <stdio.h>
#include <string.h>

int main()
{
    char first[11], second[11], temp[2];
    scanf("%s", first);
    scanf("%s", second);

    printf("%d %d\n", strlen(first), strlen(second));
    char third[strlen(first) + strlen(second)];
    for (int i = 0; i < strlen(first); i++)
    {
        third[i] = first[i];
        printf("%c", third[i]);
    }

    for (int i = strlen(first); i < strlen(first) + strlen(second); i++)
    {
        third[i] = second[(i - strlen(first))];
        printf("%c", third[i]);
    }

    temp[0] = first[0];
    first[0] = second[0];
    second[0] = temp[0];

    printf("\n%s %s", first, second);

    return 0;
}