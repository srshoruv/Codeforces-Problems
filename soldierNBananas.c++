#include <iostream>
using namespace std;

int main()
{
    int price, balance, unit, total = 0, borrow = 0;
    cin >> price >> balance >> unit;

    for (int i = 1; i <= unit; i++)
    {
        total += i * price;
    }

    borrow = total - balance;
    if (borrow <= 0)
    {
        borrow = 0;
    }

    cout << borrow << endl;
    return 0;
}