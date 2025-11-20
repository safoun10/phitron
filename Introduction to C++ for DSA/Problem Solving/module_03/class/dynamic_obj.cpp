#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *do_something()
{
    Student *bear = new Student(1, 10, 5);
    return bear;
}

int main()
{
    Student *bear = do_something();
    cout << bear->roll << " " << bear->cls << " " << bear->gpa << endl;
    return 0;
}