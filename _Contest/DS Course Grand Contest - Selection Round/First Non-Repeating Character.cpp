#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;

    vector<int> v(26, 0);

    for (int i = 0; i < word.size(); i++)
    {
        v[word[i] - 'a']++;
    }

    bool found = false;
    for (int i = 0; i < word.size(); i++)
    {
        if (v[word[i] - 'a'] == 1)
        {
            cout << word[i];
            found = true;
            break;
        }
    }

    if (found == false)
    {
        cout << -1;
    }

    return 0;
}
