#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int n, normal, master, total = 0;
        cin >> n >> normal >> master;
        int array[n];

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            total += min((array[i] * normal), master);
        }
        cout << total << endl;
    }
    return 0;
}