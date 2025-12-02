#include <bits/stdc++.h>
using namespace std;

int main()
{
    string country = "Bangladesh";
    cout << *country.begin() << endl;     // points towards the beginning of the string
    cout << *(country.end() - 1) << endl; // points towards the end of the string

    for (auto it = country.begin(); it < country.end(); it++) // string::iterator replaced with auto
    {
        cout << *it << endl;
    }

    return 0;
}