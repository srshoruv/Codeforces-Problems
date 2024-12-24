#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    int a = year % 10;
    int b = (year / 10) % 10;
    int c = (year / 100) % 10;
    int d = (year / 1000) % 10;

    while (a == b && a==c && a==d && b == d && b == c && c == d)
    {
        year++;
    }

    cout << year << endl;
    
}