#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count, limit;
    cin >> limit >> count;
    vector<long long> v(limit);

    for (int t = 0; t < limit; t++)
    {
        cin >> v[t];
        if (t > 0)
        {
            v[t] = v[t] + v[t - 1];
        }
    }

    while (count--)
    {
        long long a, b, sum;
        cin >> a >> b;
        (a == 1) ? sum = v[b - 1] : sum = v[b - 1] - v[a - 2];
        cout << sum << endl;
    }
    
    return 0;
}