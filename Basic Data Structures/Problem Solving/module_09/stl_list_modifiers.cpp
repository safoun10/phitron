#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30};

    l.push_front(0);
    l.push_back(40);

    for (int it : l)
    {
        cout << it << " ";
    }
    cout << endl;

    l.pop_back();
    l.pop_front();

    for (int it : l)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << *next(l.begin(), 1) << endl;

    l.insert(next(l.begin(), 1), 100);

    for (int it : l)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}