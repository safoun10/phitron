#include <bits/stdc++.h>
using namespace std;

void shifter(int limit, int array[])
{
    int count = 0;
    for (int i = 0; i < limit; i++)
    {
        if (array[i] != 0)
        {
            cout << array[i] << " ";
        }
        else
        {
            count++;
        }
    }

    for (int i = 1; i <= count; i++)
    {
        cout << "0" << " ";
    }
}

int main()
{
    int limit;
    cin >> limit;
    int *array = new int[limit];
    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }
    shifter(limit, array);
    return 0;
}