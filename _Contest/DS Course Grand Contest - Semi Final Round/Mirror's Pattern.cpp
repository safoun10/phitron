#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    if (limit == 1)
    {
        cout << 1;
    }
    else
    {
        for (int t = 1; t <= limit; t++)
        {
            cout << t;
        }
        cout << endl;
        int mid = 2;
        int space = limit - 2;
        for (int i = limit - 1; i >= 2; i--)
        {
            cout << mid;
            for (int j = 1; j <= space; j++)
            {
                cout << " ";
            }
            cout << i;
            mid++;
            cout << endl;
        }
        for (int t = limit; t >= 1; t--)
        {
            cout << t;
        }
    }

    return 0;
}