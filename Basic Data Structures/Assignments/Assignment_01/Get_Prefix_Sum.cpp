#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    vector<long long> v(limit);
    for (int t = 0; t < limit; t++)
    {
        cin >> v[t];
        if (t > 0)
        {
            v[t] += v[t - 1];
        }
    }

    for (int i = limit - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}