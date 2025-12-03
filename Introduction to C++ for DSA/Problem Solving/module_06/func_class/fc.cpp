#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    string name;
    int make;
    int hp;
    int speed;
    int price;
    int tax;

    Car(string name, int make, int hp, int speed, int price, int tax)
    {
        this->name = name;
        this->make = make;
        this->hp = hp;
        this->speed = speed;
        this->price = price;
        this->tax = tax;
    }
    int cost()
    {
        return price + tax;
    }
};

int main()
{
    Car supra("a91 mk5", 2025, 600, 220, 70000, 10000);
    cout << supra.name << " is " << supra.make << " model with " << supra.hp << " hp and a top speed of " << supra.speed << endl;
    cout << "cost is gonna be " << supra.cost() << endl;
    return 0;
}