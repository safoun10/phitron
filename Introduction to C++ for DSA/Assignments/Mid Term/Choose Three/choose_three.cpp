#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;

    for (int t = 0; t < times; t++)
    {
        int limit, target;
        cin >> limit >> target;
        int *array = new int[limit];
        for (int i = 0; i < limit; i++)
        {
            cin >> array[i];
        }

        int flag = 0;

        for (int i = 0; i < limit; i++)
        {
            for (int j = 1; j < limit; j++)
            {
                if (i < j)
                {
                    for (int k = 2; k < limit; k++)
                    {
                        if (j < k)
                        {
                            if (array[i] + array[j] + array[k] == target)
                            {
                                flag++;
                            }
                        }
                    }
                }
            }
        }
        (flag > 0) ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}