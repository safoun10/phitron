#include <stdio.h>

int main()
{
    int limit, input_a, _input_b;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        scanf("%d %d", &input_a, &_input_b);
        if (input_a == _input_b)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}