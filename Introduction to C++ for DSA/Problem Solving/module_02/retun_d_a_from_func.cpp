#include <bits/stdc++.h>
using namespace std;

int *func()
{
    int *array = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    return array;
}

int main()
{
    int *array = func();
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}