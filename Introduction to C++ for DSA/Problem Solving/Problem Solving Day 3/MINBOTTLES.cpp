#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int count, max, total = 0;
        cin >> count >> max;

        int array[count];
        for (int i = 0; i < count; i++)
        {
            cin >> array[i];
            total += array[i];
        }
        cout << ceil((float)total / max) << endl;
    }
    return 0;
}