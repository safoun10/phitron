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
        if (v[t] > 0)
        {
            // v[t] = 1;                                // O(1)
            replace(v.begin(), v.end(), v[t], 1);       // O(n)
        }
        else if (v[t] < 0)
        {
            // v[t] = 2;                                // O(1)
            replace(v.begin(), v.end(), v[t], 2);       // O(n)
        }
        cout << v[t] << " ";
    }
    return 0;
}