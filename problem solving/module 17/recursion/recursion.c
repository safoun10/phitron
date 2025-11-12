#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// void num(int start, int limit) // 1 to n
// {
//     if (start <= limit)
//     {
//         printf("%d ", start);
//         num(start + 1, limit);
//     }
// }

// void num(int limit) // n to 1
// {
//     if (limit > 0)
//     {
//         printf("%d ", limit);
//         num(limit - 1);
//     }
// }

void num(int start, int limit) // call stack used for n to 1
{
    if (start > limit)
    {
        return;
    }

    num(start + 1, limit);

    printf("%d ", start);
}

int main()
{
    int limit;
    scanf("%d", &limit);
    num(1, limit);
    return 0;
}