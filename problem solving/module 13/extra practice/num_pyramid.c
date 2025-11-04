#include <stdio.h>
#include <string.h>

int main()
{
    int limit, star_count = 1;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        for (int space_before = limit - 1; space_before >= i; space_before--)
        {
            printf(" ");
        }

        for (int star = 1; star <= star_count; star++)
        {
            printf("%d ", star);
        }

        printf("\n");
        star_count++;
    }

    return 0;
}