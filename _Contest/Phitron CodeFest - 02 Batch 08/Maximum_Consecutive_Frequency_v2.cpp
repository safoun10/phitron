#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;

    int array[limit];

    long long best_frequent_num = LONG_LONG_MIN, best_times = 0;
    long long frequent_num = LONG_LONG_MIN, times = 0;

    for (int t = 0; t < limit; t++)
    {
        cin >> array[t];

        if (frequent_num != array[t])
        {
            frequent_num = array[t];
            times = 1;
        }
        else
        {
            times++;
        }

        if (best_times < times)
        {
            best_frequent_num = frequent_num;
            best_times = times;
        }
    }
    cout << best_frequent_num << " " << best_times;
    return 0;
}