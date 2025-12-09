#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int count = 0, flag = 0;
        char a;
        for (int i = 0; i < 6; i++)
        {
            cin >> a;

            (a != 'W') ? count = 0 : count++;

            if (count == 3)
            {
                flag++;
            }
        }

        flag > 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}