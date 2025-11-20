#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    long long c;
    char s;

    cin >> a >> s >> b;
    cin.ignore(10, '=');
    cin >> c;

    if (s == '+')
    {
        ((a + b) == c) ? cout << "Yes" : cout << (a + b);
    }
    else if (s == '-')
    {
        ((a - b) == c) ? cout << "Yes" : cout << (a - b);
    }
    else if (s == '*')
    {
        (((long long)a * (long long)b) == (long long)c) ? cout << "Yes" : cout << ((long long)a * (long long)b);
    }

    return 0;
}