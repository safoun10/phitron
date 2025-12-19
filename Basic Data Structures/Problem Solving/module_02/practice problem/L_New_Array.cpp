#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;

    vector<int> array(limit);
    vector<int> array2(limit);

    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < limit; i++)
    {
        cin >> array2[i];
    }

    array2.insert(array2.end(), array.begin(), array.end());

    for (int i = 0; i < array2.size(); i++)
    {
        cout << array2[i] << " ";
    }

    return 0;
}