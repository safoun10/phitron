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

    sort(array, array + limit);                 // ascending order a1 < a2
    sort(array, array + limit, greater<int>()); // descending order a1 > a2

    for (int i = 0; i < limit; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}