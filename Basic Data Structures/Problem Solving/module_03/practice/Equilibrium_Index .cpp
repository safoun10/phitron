#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    vector<int> v(limit), v_1(limit), v_2(limit);
    int k = limit - 1;

    for (int t = 0; t < limit; t++)
    {
        cin >> v[t];
    }

    for (int i = 0; i < limit; i++)
    {
        v_1[i] = v[i];
        v_2[i] = v[k];
        if (i > 0)
        {
            v_1[i] += v_1[i - 1];
            v_2[i] += v_2[i - 1];
        }
        k--;
    }

    bool flag = false;
    for (int i = 0; i < limit; i++)
    {
        if (v_1[i] == v_2[limit - i - 1])
        {
            cout << i;
            flag = true;
            break;
        }
    }

    if (flag == false)
    {
        cout << -1;
    }

    return 0;
}