#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    if (a == 0)
    {
        cout << 0;
        return 0;
    }
    cout << ceil(100 / (double)(a * 0.2));
    return 0;
}