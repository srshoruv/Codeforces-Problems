#include <iostream>
using namespace std;

int main()
{
    long int testCase;
    long int i = 1;
    cin >> testCase;
    while (testCase--)
    {
        long int num;
        cin >> num;
        if (num % 11 == 0)
        {
            cout << "Case " << i << ": Yes\n";
        }
        else
        {
            cout << "Case " << i << ": No\n";
        }
        i++;
    }
    return 0;
}