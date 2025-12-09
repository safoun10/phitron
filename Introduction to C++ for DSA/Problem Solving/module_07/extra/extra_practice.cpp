#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool custom(Student left, Student right)
{
    return (left.marks < right.marks) || (left.marks == right.marks && left.roll > right.roll);
}

int main()
{
    int limit;
    cin >> limit;
    Student array[limit];

    for (int t = 0; t < limit; t++)
    {
        cin >> array[t].name >> array[t].roll >> array[t].marks;
    }

    sort(array, array + limit, custom);

    for (int t = 0; t < limit; t++)
    {
        cout << array[t].name << " " << array[t].roll << " " << array[t].marks << endl;
    }

    return 0;
}