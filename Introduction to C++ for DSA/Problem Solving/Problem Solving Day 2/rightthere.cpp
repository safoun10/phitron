#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int a, b;
        cin >> a >> b;
        a <= b ? cout << "yes" << endl : cout << "no" << endl;
    }
    return 0;
}