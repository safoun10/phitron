#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "safoun";

    cout << name.size() << endl;
    cout << name.max_size() << endl;
    cout << name.capacity() << endl;

    name.resize(10, 'a');
    cout << name << endl;

    name.clear();
    cout << name.empty() << endl; // 0 means string exists , 1 means no string

    return 0;
}