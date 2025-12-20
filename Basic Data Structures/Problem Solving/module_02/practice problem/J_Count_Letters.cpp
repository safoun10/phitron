#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> v(29);
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 'a']++;
    }

    for (int i = 0; i < 29; i++)
    {
        if (v[i] > 0)
        {
            char letter = i + 97;
            cout << letter << " : " << v[i] << endl;
        }
    }

    return 0;
}