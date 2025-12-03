#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;

    for (int i = 0; i < limit; i++)
    {
        int array[26] = {0};
        int size;
        cin >> size;

        string word;
        cin >> word;

        for (int i = 0; i < word.size(); i++)
        {
            array[word[i] - 'A']++;
            if (array[word[i] - 'A'] == 1)
            {
                array[word[i] - 'A'] = 2;
            }
        }

        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            sum += array[i];
        }
        cout << sum << endl;
    }

    return 0;
}