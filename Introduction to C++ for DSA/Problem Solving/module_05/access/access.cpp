#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "addams";

    cout << name[0] << endl;
    cout << name.at(0) << endl; // useless piece of shit

    cout << name.back() << endl;
    cout << name.front() << endl;

    cout << name[name.size() - 1] << endl; // same as name.back()
    cout << name[0] << endl;               // same as name.front()

    return 0;
}