#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 20, 30, 40, 50};

    l.sort();
    l.sort(greater<int>());
    l.unique();
    l.reverse();

    
    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}