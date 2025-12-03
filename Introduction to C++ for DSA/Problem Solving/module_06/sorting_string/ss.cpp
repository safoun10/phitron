#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Safoun";
    sort(name.begin(), name.end());
    cout << name << endl;

    for (char c : name)
    {
        cout << c << " ";
    }

    return 0;
}