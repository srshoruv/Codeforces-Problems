#include <iostream>
using namespace std;

int main()
{
    long long int num;
    int countLucky = 0;
    cin >> num;

    while (num)
    {
        if (num % 10 == 7 || num % 10 == 4)
        {
            countLucky++;
        }

        num = num / 10;
    }

    if (countLucky == 7 || countLucky == 4)
    {
        cout << "YES\n"; 
    }
    else
    {
        cout << "NO\n";
    }

    
    return 0;
}