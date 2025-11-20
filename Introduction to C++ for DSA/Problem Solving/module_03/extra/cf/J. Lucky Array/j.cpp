#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    int *array = new int[limit];
    int mini = 1000000;
    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
        if (mini > array[i])
        {
            mini = array[i];
        }
    }

    int counter = 0;
    for (int i = 0; i < limit; i++)
    {
        if (array[i] == mini)
        {
            counter++;
        }
    }

    (counter % 2 != 0)
        ? cout << "Lucky"
        : cout << "Unlucky";

    return 0;
}