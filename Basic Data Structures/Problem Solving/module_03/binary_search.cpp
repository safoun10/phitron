#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit, target;
    cin >> limit >> target;
    vector<int> v(limit);

    for (int t = 0; t < limit; t++)
    {
        cin >> v[t];
    }

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

    (flag > 0) ? cout << "Found" << endl : cout << "Not Found" << endl;

    return 0;
}