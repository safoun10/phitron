#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;

    for (int i = 0; i < limit; i++)
    {
        string word, target;
        cin >> word >> target;
        
        int index = word.find(target);

        while (index < word.size())
        {
            word.replace(index, target.size(), "#");
            index = word.find(target);
        }
        cout << word << endl;
    }

    return 0;
}
