#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID;
    char name[101];
    char section;
    int total_marks;
};

int main()
{
    Student a;
    Student b;
    Student c;
    int limit;
    cin >> limit;

    for (int i = 0; i < limit; i++)
    {
        cin >> a.ID >> a.name >> a.section >> a.total_marks;
        cin >> b.ID >> b.name >> b.section >> b.total_marks;
        cin >> c.ID >> c.name >> c.section >> c.total_marks;

        if (a.total_marks >= b.total_marks && a.total_marks >= c.total_marks)
        {
            cout << a.ID << " " << a.name << " " << a.section << " " << a.total_marks << endl;
        }
        else if (b.total_marks >= a.total_marks && b.total_marks >= c.total_marks)
        {
            cout << b.ID << " " << b.name << " " << b.section << " " << b.total_marks << endl;
        }
        else
        {
            cout << c.ID << " " << c.name << " " << c.section << " " << c.total_marks << endl;
        }
    }

    return 0;
}