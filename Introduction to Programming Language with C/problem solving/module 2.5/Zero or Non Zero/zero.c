#include <stdio.h>

int main()
{
    short int num;
    scanf("%hd", &num);

    if (num == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Non Zero");
    }
    return 0;
}