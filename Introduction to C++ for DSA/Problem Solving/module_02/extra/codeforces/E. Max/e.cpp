#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;

    int array[limit];
    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }

    int maximum = array[0];
    for (int i = 0; i < limit; i++)
    {
        maximum = max(maximum, array[i]);
    }

    cout << maximum << endl;

    return 0;
}