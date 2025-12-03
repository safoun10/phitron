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
        cin >> array[i].name >> array[i].roll >> array[i].marks;
    }

    Student mini;
    mini.marks = INT_MAX;

    for (int i = 0; i < limit; i++)
    {
        if (array[i].marks < mini.marks)
        {
            mini = array[i];
        }
        
    }

    cout << mini.name << " " << mini.roll << " "<< mini.marks;

    return 0;
}