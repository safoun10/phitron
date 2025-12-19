#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    vector<int> array(limit);
    for (int t = 0; t < limit; t++)
    {
        cin >> array[t];
    }

    reverse(array.begin(), array.end());

    for (int t = 0; t < limit; t++)
    {
        cout << array[t] << " ";
    }
    return 0;
}