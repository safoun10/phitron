#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student left, Student right)
{
    // if (left.marks < right.marks)           // regular mark sort
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    // return left.marks < right.marks;         // shortcut for only mark sort

    // if (left.marks < right.marks)               // mark sort with roll sort
    // {
    //     return true;
    // }
    // else if (left.marks > right.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //     if (left.roll < right.roll)
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }

    // if (left.marks == right.marks) // wtf
    // {
    //     return left.roll < right.roll;
    // }
    // else
    // {
    //     return left.marks < right.marks;
    // }

    return (left.marks == right.marks) ? left.roll > right.roll : left.marks > right.marks;     // this shouldn't be legal
}

int main()
{
    int limit;
    cin >> limit;
    Student array[limit];

    for (int i = 0; i < limit; i++)
    {
        cin >> array[i].name >> array[i].roll >> array[i].marks;
    }

    sort(array, array + limit, cmp);
    for (int i = 0; i < limit; i++)
    {
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
    }

    return 0;
}