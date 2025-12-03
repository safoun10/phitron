#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int j = 0, flag = 0;
    for (int i = (word.size() - 1); i > j; i--)
    {

        if (word[i] != word[j])
        {
            flag++;
            break;
        }
        j++;
    }
    flag == 0 ? cout << "YES" : cout << "NO";

    return 0;
}