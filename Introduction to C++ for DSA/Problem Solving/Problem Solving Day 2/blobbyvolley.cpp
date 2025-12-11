#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int size;
        string game;
        cin >> size >> game;

        int alice = 0, bob = 0;
        string turn = "alice";

        for (int i = 0; i < size; i++)
        {
            if (turn == "alice")
            {
                if (game[i] == 'A')
                {
                    alice++;
                }
                else
                {
                    turn = "bob";
                }
            }
            else
            {
                if (game[i] == 'A')
                {
                    turn = "alice";
                }
                else
                {
                    bob++;
                }
            }
        }
        cout << alice << " " << bob << endl;
    }
    return 0;
}