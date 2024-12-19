#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase)
    {
        int num;
        cin >> num;

        if (num % 33 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

        testCase--;
    }

    return 0;
    
}