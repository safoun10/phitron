#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;

    for (int i = 0; i < limit; i++)
    {
        string first, second;
        cin >> first >> second;

        int larger = max(first.size(), second.size());

        for (int i = 0; i < larger; i++)
        {
            if (i < first.size())
            {
                cout << first[i];
            }

            if (i < second.size())
            {
                cout << second[i];
            }
        }
        cout << endl;
    }

    return 0;
}