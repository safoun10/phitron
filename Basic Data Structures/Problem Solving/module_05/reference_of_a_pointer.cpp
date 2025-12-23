#include <bits/stdc++.h>
using namespace std;

// you need to send the reference of a pointer as a parameter to change it i.e.   (int *&p)
// or else the sent pointer gets copied inside a function and isn't actually modifiable i/e.    (int *p)
// to nullify a pointer sent inside a function, use *&p

void nullify(int *&p)
{
    p = NULL;
}

int main()
{
    int a = 10;
    int *p = &a;
    cout << p << endl;

    nullify(p);

    cout << p << endl;
    return 0;
}