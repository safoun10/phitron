#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int class_;
    char section;
    int id;
};

int main()
{
    int limit;
    cin >> limit;
    Student array[limit];

    for (int i = 0; i < limit; i++)
    {
        cin >> array[i].name >> array[i].class_ >> array[i].section >> array[i].id;
    }

    int j = 0;
    for (int i = limit - 1; i > j; i--)
    {
        swap(array[i].section, array[j].section);
        j++;
    }

    for (int i = 0; i < limit; i++)
    {
        cout << array[i].name << " " << array[i].class_ << " " << array[i].section << " " << array[i].id << endl;
    }

    return 0;
}