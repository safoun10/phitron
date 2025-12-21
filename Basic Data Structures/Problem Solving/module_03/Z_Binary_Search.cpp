#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit, count;
    cin >> limit >> count;
    vector<int> v(limit);
    for (int t = 0; t < limit; t++)
    {
        cin >> v[t];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < count; i++)
    {
        int target;
        cin >> target;

        int left = 0, right = limit - 1, flag = 0;

        while (right >= left)
        {
            int mid = (left + right) / 2;
            if (v[mid] == target)
            {
                flag++;
                break;
            }
            else if (v[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        (flag > 0) ? cout << "found" << endl : cout << "not found" << endl;
    }

    return 0;
}