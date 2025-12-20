#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count, limit;
    cin >> limit >> count;
    vector<int> v(limit);
    for (int t = 0; t < limit; t++) // O(n)
    {
        cin >> v[t];
    }

    for (int i = 0; i < count; i++) // O(n)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        for (int j = a - 1; j <= b - 1; j++) // O(n)
        {
            sum += v[j];
        }
        cout << sum << endl;
    }  // O(n^2)

    return 0;
}


// TLE