#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int num, a, b;
        cin >> num >> a >> b;
        (2 * a >= b)
            ? cout << num * a << endl
            : cout << (((num - ((num / 2) * 2)) * a) + ((num / 2) * b)) << endl;
    }
    return 0;
}