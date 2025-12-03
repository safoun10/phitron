#include <bits/stdc++.h>
using namespace std;

int main()
{
    string test;
    cin >> test;

    string flag = "EGYPT";

    while (test.find(flag) != string::npos)
    {
        test.replace(test.find(flag), 5, " ");
    }

    cout << test;

    return 0;
}