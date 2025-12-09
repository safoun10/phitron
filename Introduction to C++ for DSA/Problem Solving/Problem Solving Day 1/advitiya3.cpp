#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int count, jar, each_jar, extra = INT_MAX;
        bool presense = false;
        cin >> count >> jar;

        for (int i = 0; i < count; i++)
        {
            cin >> each_jar;
            if (jar <= each_jar)
            {
                presense = true;
                if (extra >= each_jar % jar)
                {   
                    extra = each_jar % jar;
                }
            }
        }
        presense != true ? cout << -1 << endl : cout << extra << endl;
    }
    return 0;
}