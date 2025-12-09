#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;

    for (int t = 0; t < limit; t++)
    {
        int size;
        cin >> size;
        int array[size];

        int odd = 0;
        int even = 0;

        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
            (array[i] % 2 == 0) ? even++ : odd++;
        }
        
        if (size % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }

        cout << abs(even - size / 2) << endl;
    }
    return 0;
}