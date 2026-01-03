#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    long long target = -1;
    bool possible = true;

    for (int i = 0; i < n; i++)
    {
        long long sum = 0;
        bool zero_found = false;

        for (int j = 0; j < m; j++)
        {
            long long value;
            cin >> value;

            if (value == 0)
            {
                zero_found = true;
            }
            else
            {
                sum += value;
            }
        }

        if (zero_found == false)
        {
            if (target == -1)
            {
                target = sum;
            }
            else if (sum != target)
            {
                possible = false;
            }
        }
    }

    if (possible == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
