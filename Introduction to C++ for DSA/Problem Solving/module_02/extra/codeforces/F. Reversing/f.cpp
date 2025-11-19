#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    int array[1000];
    cin >> limit;

    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }

    for (int i = limit - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }

    return 0;
}