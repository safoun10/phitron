#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int t = 0; t < limit; t++)
    {
        char s[1005];
        scanf("%s", s);

        int array[26] = {0};
        for (int i = 0; i < strlen(s); i++)
        {
            array[s[i] - 'a']++;
        }

        int odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (array[i] % 2 == 1)
            {
                odd++;
            }
        }

        int answer = 0;
        if (odd > 1)
        {
            answer = odd - 1;
        }

        printf("%d\n", answer);
    }
    return 0;
}
