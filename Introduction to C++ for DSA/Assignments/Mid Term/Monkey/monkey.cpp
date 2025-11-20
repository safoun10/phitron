#include <bits/stdc++.h>
using namespace std;

int main()
{
    char array[100005];

    while (cin.getline(array, 100005))
    {
        int alpha[26] = {0};
        int len = strlen(array);

        for (int i = 0; i < len; i++)
        {
            if (array[i] >= 'a' && array[i] <= 'z')
            {
                alpha[array[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < alpha[i]; j++)
            {
                cout << (char)(i + 'a');
            }
        }

        cout << endl;
    }

    return 0;
}
