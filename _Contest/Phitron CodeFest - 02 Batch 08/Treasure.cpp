#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, limit;
    cin >> n >> m >> limit;

    long long array[1005][1005];
    long long pre[1005][1005];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            pre[i][j] = array[i][j];

            if (i > 0)
            {
                pre[i][j] += pre[i - 1][j];
            }
            if (j > 0)
            {
                pre[i][j] += pre[i][j - 1];
            }
            if (i > 0 && j > 0)
            {
                pre[i][j] -= pre[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i < limit; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long sum = pre[x2][y2];

        if (x1 > 0)
        {
            sum -= pre[x1 - 1][y2];
        }
        if (y1 > 0)
        {
            sum -= pre[x2][y1 - 1];
        }
        if (x1 > 0 && y1 > 0)
        {
            sum += pre[x1 - 1][y1 - 1];
        }

        cout << sum << endl;
    }

    return 0;
}
// safoun_