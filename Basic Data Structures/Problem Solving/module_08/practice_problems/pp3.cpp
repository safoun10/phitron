#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l, l_2;
    int val;
    while ((cin >> val && val != -1))
    {
        l.push_back(val);
    }

    l_2 = l;
    l_2.reverse();

    return 0;
}