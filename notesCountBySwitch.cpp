#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter amount: " << endl;
    cin >> amount;

    int Rs100, Rs50, Rs20, Rs10;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "required notes of 100s are= " << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "required notes of 50s are= " <<Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "required notes of 20s are= " <<Rs20 << endl;

    case 4:
        Rs10 = amount / 10;
        amount = amount % 10;
        cout << "required notes of 10s are= " << Rs10 << endl;
    }
}