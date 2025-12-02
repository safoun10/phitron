#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int i = 1; i <= limit; i++)
    {
        string word;
        cin >> word;
        if (word.size() <= 10)
        {
            cout << word << endl;
        }
        else
        {
            cout << word[0] << word.size() - 2 << word.back() << endl;
        }
    }

    return 0;
}