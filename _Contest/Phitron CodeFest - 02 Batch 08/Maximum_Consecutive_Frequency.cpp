#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;

    int array[1000000];
    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }

    int best_num = array[0];
    int best_freq = 1;
    int curr_num = array[0];
    int curr_freq = 1;

    for (int i = 1; i < limit; i++)
    {
        if (array[i] == curr_num)
        {
            curr_freq++;
        }
        else
        {
            if (curr_freq > best_freq)
            {
                best_freq = curr_freq;
                best_num = curr_num;
            }
            curr_num = array[i];
            curr_freq = 1;
        }
    }

    if (curr_freq > best_freq)
    {
        best_freq = curr_freq;
        best_num = curr_num;
    }

    cout << best_num << " " << best_freq << endl;

    return 0;
}
