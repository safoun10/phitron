#include <bits/stdc++.h>
using namespace std;

void machine_gun_for_char(int n, char a)
{
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
    }
    cout << endl;
}

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int n;
        char a;

        cin >> n >> a;
        machine_gun_for_char(n, a);
    }
    return 0;
}