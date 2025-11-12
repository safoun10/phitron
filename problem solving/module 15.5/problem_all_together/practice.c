#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int my_abs(int num)
{
    return abs(num);
}

int my_len(char *text)
{
    int len = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int count_odd(int array[], int limit)
{
    int odd = 0;
    for (int i = 0; i < limit; i++)
    {
        if (array[i] % 2 != 0)
        {
            odd++;
        }
    }
    return odd;
}

void change_it(int array[], int limit)
{
    array[limit - 1] = 100;
}

void swap_it(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // int limit;
    // scanf("%d", &limit);
    // printf("abs = %d\n", my_abs(limit));

    // char text[10];
    // scanf("%s", text);
    // printf("len = %d\n", my_len(text));

    // int limit;
    // scanf("%d", &limit);
    // int array[limit];
    // for (int i = 0; i < limit; i++)
    // {
    //     scanf("%d", &array[i]);
    // }
    // printf("odd = %d\n", count_odd(array, limit));

    // int limit;
    // scanf("%d", &limit);
    // int array[limit];
    // for (int i = 0; i < limit; i++)
    // {
    //     scanf("%d", &array[i]);
    // }
    // change_it(array, limit);
    // for (int i = 0; i < limit; i++)
    // {
    //     printf("%d ", array[i]);
    // }

    // int a, b;
    // scanf("%d %d", &a, &b);
    // swap_it(&a, &b);
    // printf("%d %d", a, b);

    return 0;
}