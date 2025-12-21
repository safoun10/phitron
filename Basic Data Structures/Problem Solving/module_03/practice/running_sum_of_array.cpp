#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    vector<int> v(limit);
    for (int t = 0; t < limit; t++)
    {
        cin >> v[t];
        if (t > 0)
        {
            v[t] += v[t - 1];
        }
    }

    for (int i = 0; i < limit; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}