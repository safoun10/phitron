#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(int limit)
{
    if (limit == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    print(limit - 1);
}

int main()
{
    int limit;
    scanf("%d", &limit);
    print(limit);
    return 0;
}