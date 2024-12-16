#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase)
    {
        int inp;
        cin >> inp;
        cout << inp - 1 << endl;

        testCase--;
    }

    return 0;
    
}