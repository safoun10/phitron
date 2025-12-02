#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    string standing;
    int anton = 0, danik = 0;

    cin >> standing;
    for (int i = 0; i < limit; i++)
    {
        standing[i] == 'A' ? anton++ : danik++;
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}