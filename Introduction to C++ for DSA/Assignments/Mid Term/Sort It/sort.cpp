#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    int *array = new int[limit];
    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }

    sort(array, array + limit);

    for (int i = 0; i < limit; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    sort(array, array + limit, greater<int>());
    for (int i = 0; i < limit; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}