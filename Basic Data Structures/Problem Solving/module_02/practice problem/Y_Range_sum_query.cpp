#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count, limit;
    cin >> limit >> count;
    vector<long long> v(limit);
    for (int t = 0; t < limit; t++) // O(n)
    {
        cin >> v[t];
        if (t > 0)
        {
            v[t] = v[t] + v[t - 1];
        }
    }

    /*

    prefix sum;
    1. make another identical vector
    2. create prefix sum .. where:

    - index 0 stays same
    - index 1 = v[0] + v[1]
    or
    - index 1 = v[1] + v[1 - 1]
    - v[i] = v[i] + v[i - 1]
    - v[i] += v[i - 1]              // prefix sum

    */

    for (int i = 0; i < count; i++) // O(q)
    {
        long long a, b, sum = 0;
        cin >> a >> b;
        (a == 1) ? sum = v[b - 1] : sum = v[b - 1] - v[a - 2];
        cout << sum << endl;
    }

    return 0;
}

// TLE