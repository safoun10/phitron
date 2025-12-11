#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    cin >> text;
    reverse(text.begin(), text.end());
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = text[i] + 32;
        }
    }
    cout << text;
    return 0;
}