#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    int *array = new int[limit];
    for (int i = 0; i < limit; i++)
    {
        cin >> array[i];
    }
    int start = 0, flag = 0;
    for (int i = limit - 1; i > start; i--)
    {
        if (array[start] != array[i])
        {
            flag ++;
        }
        start++;
    }
    //test

    return 0;
}