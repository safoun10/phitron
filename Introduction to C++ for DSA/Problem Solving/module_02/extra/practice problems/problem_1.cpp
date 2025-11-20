#include <bits/stdc++.h>
using namespace std;

int *get_array(int limit)
{
    int *array = new int[limit];
    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }
    return array;
}

int main()
{
    int limit;
    cin >> limit;
    int *array = get_array(limit);

    for (int i = 0; i < limit; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}