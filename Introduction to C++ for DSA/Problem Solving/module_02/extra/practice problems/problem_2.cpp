#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit_a;
    cin >> limit_a;

    int *array_a = new int[limit_a];
    for (int i = 0; i < limit_a; i++)
    {
        cin >> array_a[i];
    }

    int limit_b;
    cin >> limit_b;

    int *array_b = new int[limit_b];

    for (int i = limit_a; i < limit_b; i++)
    {
        cin >> array_b[i];
    }

    for (int i = 0; i < limit_a; i++)
    {
        array_b[i] = array_a[i];
    }

    for (int i = 0; i < limit_b; i++)
    {
        cout << array_b[i] << " ";
    }

    return 0;
}