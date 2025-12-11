#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int hp, attack, special;
        cin >> hp >> attack >> special;

        if (hp - special <= 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << ceil((float)(hp - special) / attack) + 1 << endl;
        }
    }
    return 0;
}