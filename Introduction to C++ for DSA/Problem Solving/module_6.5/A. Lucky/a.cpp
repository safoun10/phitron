#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int i = 0; i < limit; i++)
    {
        string num;
        cin >> num;
        (num[0] + num[1] + num[2]) == (num[3] + num[4] + num[5]) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}