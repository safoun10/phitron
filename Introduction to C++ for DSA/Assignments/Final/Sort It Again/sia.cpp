#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int class_;
    char section;
    int id;
    int math;
    int eng;
};

bool compare(Student left, Student right)
{
    return (left.eng != right.eng) ? left.eng > right.eng : (left.math != right.math) ? left.math > right.math : left.id < right.id; // this was fun
}

int main()
{
    int limit;
    cin >> limit;
    Student array[limit];

    for (int i = 0; i < limit; i++)
    {
        cin >> array[i].name >> array[i].class_ >> array[i].section >> array[i].id >> array[i].math >> array[i].eng;
    }

    sort(array, array + limit, compare);

    for (int i = 0; i < limit; i++)
    {
        cout << array[i].name << " " << array[i].class_ << " " << array[i].section << " " << array[i].id << " " << array[i].math << " " << array[i].eng << endl;
    }

    return 0;
}