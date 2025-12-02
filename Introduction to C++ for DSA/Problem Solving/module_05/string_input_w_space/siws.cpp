#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    cin.ignore();

    string comment;
    getline(cin, comment);

    string idk;
    cin >> idk;

    cout << num << endl
         << comment << endl
         << idk;
    return 0;
}