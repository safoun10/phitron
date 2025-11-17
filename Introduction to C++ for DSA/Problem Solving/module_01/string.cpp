#include <iostream>
using namespace std;

int main()
{
    int a;
    char text[10];

    cin >> a;
    cin.ignore();
    cin.getline(text, 100);

    cout << a << endl
         << text << endl;
    return 0;
}