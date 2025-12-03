#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int limit;
    cin >> limit;
    Student array[limit];

    for (int i = 0; i < limit; i++)
    {
        cin.ignore();
        getline(cin, array[i].name);
        cin >> array[i].roll >> array[i].marks;
    }

    for (int i = 0; i < limit; i++)
    {
        cout << array[i].name << endl
             << array[i].roll << " " << array[i].marks << endl;
    }

    return 0;
}