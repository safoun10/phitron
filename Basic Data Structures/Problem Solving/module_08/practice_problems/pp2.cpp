#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    int val;
    while ((cin >> val && val != -1))
    {
        l.push_back(val);
    }

    l.reverse();

    for (auto it : l)
    {
        cout << it << " ";
    }
    return 0;
}
