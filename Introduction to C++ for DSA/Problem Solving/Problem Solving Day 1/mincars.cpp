#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        float a;
        cin >> a;
        cout << ceil(a / 4) << endl;
    }

    return 0;
}