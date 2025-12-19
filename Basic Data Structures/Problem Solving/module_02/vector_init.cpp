#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;               // variable like behaviour + can also store an array
    // vector<int> array(5);        // array like behaviour
    // vector<int> array(5, 20);    // array with fixed element value
    // vector<int> arr2(array);     // array initialized by copying another vector

    // int num_arr[5] = {20, 10, 30, 50, 40};

    // vector<int> aarray(num_arr, num_arr + 4);       // copying data from a specified array with specific size
    // vector<int> arr_var = {20, 10, 30, 50, 40};      // working like an array but without specifying the size

    vector<int> v = {1, 2, 3, 4, 5};
    v.insert(v.begin() + 1, 100);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}