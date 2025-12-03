#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[5] = {0};

    string word;
    cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        word[i] = tolower(word[i]);
        if (word[i] == 'e')
        {
            array[0]++;
        }
        else if (word[i] == 'g')
        {
            array[1]++;
        }
        else if (word[i] == 'y')
        {
            array[2]++;
        }
        else if (word[i] == 'p')
        {
            array[3]++;
        }
        else if (word[i] == 't')
        {
            array[4]++;
        }
    }

    int mini = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] < mini)
        {
            mini = array[i];
        }
    }

    cout << mini;

    return 0;
}