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

Student do_something()
{
    Student rahim(1, 10, 5);
    return rahim;
}

int main()
{
    Student rahim = do_something();
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    return 0;
}