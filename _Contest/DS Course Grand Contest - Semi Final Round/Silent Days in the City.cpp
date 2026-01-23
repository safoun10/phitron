#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    vector<int> array(limit);
    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }

    vector<int> pref(limit, 0);
    for (int i = 1; i < limit - 1; i++)
    {
        pref[i] = pref[i - 1];
        if (array[i] < array[i - 1] && array[i] < array[i + 1])
        {
            pref[i]++;
        }
    }
    pref[limit - 1] = pref[limit - 2];

    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
        {
            l = 2;
        }
        if (r == limit)
        {
            r = limit - 1;
        }

        cout << pref[r - 1] - pref[l - 2] << endl;
    }

    return 0;
}
