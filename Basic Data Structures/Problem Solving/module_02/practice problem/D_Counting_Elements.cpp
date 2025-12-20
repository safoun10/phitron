#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit, count = 0;
    cin >> limit;
    vector<int> v(limit);
    for (int t = 0; t < limit; t++)
    {
        cin >> v[t];
    }

    for (int t = 0; t < limit; t++)
    {
        auto it = find(v.begin(), v.end(), v[t] + 1);
        if (it != v.end())
        {
            count++;
        }
    }
    cout << count;

    return 0;
}