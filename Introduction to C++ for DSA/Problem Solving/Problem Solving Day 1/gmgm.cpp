#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int count, target, num, trigger = 0;
        bool need, state = false;
        cin >> count >> target;

        for (int i = 0; i < count; i++)
        {
            cin >> num;
            need = num > target;

            if (need != state)
            {
                trigger++;
                state = need;
            }
        }
        cout << trigger << endl;
    }
    return 0;
}