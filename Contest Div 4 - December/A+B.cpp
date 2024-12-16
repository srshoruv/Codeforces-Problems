#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin  >> testCase;

    while (testCase)
    {
        int num, sum = 0;
        cin >> num;
        
        sum = (num % 10) + (num / 10);
        cout << sum << endl;

        testCase--;
    }
    
    return 0;
}


