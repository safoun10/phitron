#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int N;
        cin >> N;

        int x, max = -1;
        for (int i = 0; i < N; i++)
        {
            cin >> x;
            if (x > max)
            {
                max = x;
            }
        }

        cout << max << endl;
    }
    return 0;
}
