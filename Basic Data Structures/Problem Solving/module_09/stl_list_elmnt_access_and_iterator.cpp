#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 70};
    cout << *next(l.begin(), 0);
    return 0;
}