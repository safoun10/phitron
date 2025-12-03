#include <bits/stdc++.h>
using namespace std;

int main()
{
    string statement;
    getline(cin, statement);

    stringstream ss(statement);

    int flag = 0;
    while (ss >> statement)
    {
        if (statement == "Jessica")
        {
            flag++;
        }
    }
    flag > 0 ? cout << "YES" : cout << "NO";

    return 0;
}