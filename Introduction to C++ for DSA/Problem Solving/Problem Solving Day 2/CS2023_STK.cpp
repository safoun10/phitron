#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int n, om_streak = 0, om_max = 0, addy_streak = 0, addy_max = 0;
        cin >> n;
        int om[n], addy[n];

        for (int i = 0; i < n; i++)
        {
            cin >> om[i];
            om[i] > 0 ? om_streak++ : om_streak = 0;

            if (om_streak > om_max)
            {
                om_max = om_streak;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cin >> addy[i];
            addy[i] > 0 ? addy_streak++ : addy_streak = 0;

            if (addy_streak > addy_max)
            {
                addy_max = addy_streak;
            }
        }

        if (om_max > addy_max)
        {
            cout << "Om" << endl;
        }
        else if (om_max == addy_max)
        {
            cout << "Draw" << endl;
        }
        else
        {
            cout << "Addy" << endl;
        }
    }
    return 0;
}