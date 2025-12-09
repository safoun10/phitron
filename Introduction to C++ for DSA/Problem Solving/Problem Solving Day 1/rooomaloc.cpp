#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int room = 0;
        int a;
        float num;
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            cin >> num;
            room += ceil(num / 2);
        }
        cout << room << endl;
    }
    return 0;
}