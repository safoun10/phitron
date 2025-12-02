#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "safoun";
    string name_2 = "janina";

    cout << name << endl;
    cout << name_2 << endl;
    cout << name + name_2 << endl;
    cout << name.append(name_2) << endl;

    name.push_back('s');
    cout << name << endl;

    name.pop_back();
    cout << name << endl;

    name = "sultan";
    name.assign("sultan"); // does the same shit as name = "blah blah";
    cout << name << endl;

    // name.erase();

    name.replace(2, 1, "aaaa"); // first 2 (not index) is kept the same, next 1 is changed into "aaaa" and the rest prints later on

    // name.insert(3, "da"); // 3 is indexed, then inserted "da" and then the rest prints
    cout << name << endl;

    return 0;
}