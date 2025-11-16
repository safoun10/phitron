#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(int limit, int start)
{
    if (start > limit)
    {
        return;
    }
    printf("%d\n", start);
    print(limit, start + 1);
}

int main()
{
    int limit;
    scanf("%d", &limit);
    print(limit, 1);
    return 0;
}