#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cin >> a;
    int num = (int)a;

    if (num >= 48 && num <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (num >= 65 && num <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    else if (num >= 97 && num <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }

    return 0;
}