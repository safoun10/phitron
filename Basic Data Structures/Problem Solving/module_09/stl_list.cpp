#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l(10, 5);
    // list<int> l2(l);

    // list<int> l3 = {1, 2, 3, 4, 5};
    // list<int> l4(l3);

    // int array[] = {1, 2, 3, 4, 5};
    // list<int> l5(array, array + 5);

    // vector<int> v = {1, 2, 3, 4, 5};
    // list<int> l6(v.begin(), v.end());
    // cout << l.size() << endl;
    // cout << *l.begin();

    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (int val : l)
    {
        cout << val << " ";
    }

    cout << endl
         << l.max_size();

    return 0;
}