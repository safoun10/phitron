#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;
    int size = num.size(), odd_total = 0, even_total = 0, position = 1;

    for (int i = size - 1; i >= 0; i--)
    {
        int digit = num[i] - '0';
        (position % 2 == 1) ? odd_total += digit : even_total += digit;
        position++;
    }

    int difference = odd_total - even_total;
    
    (difference % 11 == 0) ? cout << "YES" : cout << "NO";
    return 0;
}
