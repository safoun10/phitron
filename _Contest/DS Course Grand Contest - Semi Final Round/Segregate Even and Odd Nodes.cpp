#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;

    vector<int> even_array;
    vector<int> odd_array;

    for (int i = 0; i < limit; i++)
    {
        int val;
        cin >> val;

        if (val % 2 == 0)
        {
            even_array.push_back(val);
        }
        else
        {
            odd_array.push_back(val);
        }
    }

    for (auto it : even_array)
    {
        cout << it << " ";
    }
    for (auto it : odd_array)
    {
        cout << it << " ";
    }

    return 0;
}