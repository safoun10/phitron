#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *array_a = new int[5];
    int *array_b = new int[7];

    for (int i = 0; i < 5; i++)
    {
        cin >> array_a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        array_b[i] = array_a[i];
    }

    array_b[5] = 6;
    array_b[6] = 7;

    delete[] array_a;

    for (int i = 0; i < 7; i++)
    {
        cout << array_b[i] << " ";
    }

    return 0;
}