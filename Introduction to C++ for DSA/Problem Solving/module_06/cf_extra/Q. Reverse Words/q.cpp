#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    stringstream ss(text);
    
    ss >> text;
    reverse(text.begin(), text.end());
    cout << text;

    while (ss >> text)
    {
        reverse(text.begin(), text.end());
        cout << " " << text;
    }

    return 0;
}