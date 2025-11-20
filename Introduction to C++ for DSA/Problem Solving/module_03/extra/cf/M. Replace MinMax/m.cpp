#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    int *array = new int[limit];
    int min = 1000000, min_i = 0;
    int max = -1000000, max_i = 0;
    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < limit; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            min_i = i;
        }
    }

    for (int i = 0; i < limit; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            max_i = i;
        }
    }

    swap(array[max_i], array[min_i]);

    for (int i = 0; i < limit; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}