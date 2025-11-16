#include <stdio.h>

int main()
{
    int password;
    for (int i = 1; i > 0; i++)
    {
        scanf("%d", &password);
        if (password == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}

// this is practically a memory bomb! do not run if you don't know the inputs !!!