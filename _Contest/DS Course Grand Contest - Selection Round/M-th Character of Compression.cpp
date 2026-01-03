#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    int pos;
    cin >> word >> pos;

    int len = 0;
    char last_char = '\0';

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            len = len + 1;
            if (len == pos)
            {
                cout << word[i];
                return 0;
            }
            last_char = word[i];
        }
        else
        {
            int count = word[i] - '0';
            int extra_char = count - 1;
            if (len + extra_char >= pos)
            {
                cout << last_char;
                return 0;
            }
            len = len + extra_char;
        }
    }

    return 0;
}
