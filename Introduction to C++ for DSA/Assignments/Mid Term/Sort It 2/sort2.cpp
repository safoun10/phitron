#include <bits/stdc++.h>
using namespace std;

int *sort_it(int limit)
{
    int *array = new int[limit];
    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }
    sort(array, array + limit, greater<int>());
    return array;
}

int main()
{
    int limit;
    cin >> limit;

    int *array = sort_it(limit);
    for (int i = 0; i < limit; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}