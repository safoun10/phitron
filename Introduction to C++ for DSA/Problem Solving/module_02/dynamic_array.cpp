#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int array[5];
    int *array = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
        cout << array[i] << " ";
    }

    return 0;
}