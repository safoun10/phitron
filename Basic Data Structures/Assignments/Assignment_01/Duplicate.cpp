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
    }
    sort(v.begin(), v.end());

    int need = v[0];
    bool flag = false;

    for (int t = 1; t < limit; t++)
    {
        if (v[t] == need)
        {
            flag = true;
            break;
        }
        else
        {
            need = v[t];
        }
    }

    flag == true ? cout << "YES" : cout << "NO";
    return 0;
}