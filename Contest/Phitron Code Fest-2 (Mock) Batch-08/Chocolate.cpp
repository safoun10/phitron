#include <bits/stdc++.h>
using namespace std;

int calc(int wrappers, int count)
{
    int extra = 0;
    int num = wrappers / 3;
    if (num >= 1)
    {
        extra = num;
    }
    count += extra;

    if (wrappers < 3)
    {
        return count;
    }
    else
    {
        return calc(extra + (wrappers % 3), count);
    }
}

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int tk;
        cin >> tk;

        int bought = tk / 5;
        int ans = bought + calc(bought, 0);

        cout << ans << endl;
    }
    return 0;
}
