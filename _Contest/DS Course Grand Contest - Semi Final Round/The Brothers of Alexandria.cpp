#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit, index;
    cin >> limit >> index;

    vector<int> array(limit);

    for (int t = 0; t < limit; t++)
    {
        cin >> array[t];
    }
    sort(array.begin(), array.end());
    cout << array[index - 1];
    return 0;
}