#include <bits/stdc++.h>
using namespace std;

int main()
{
    string statement;
    getline(cin, statement);

    stringstream ss(statement);

    while (ss >> statement)
    {
        cout << statement << endl;
    }

    return 0;
}