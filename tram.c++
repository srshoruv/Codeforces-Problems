#include <iostream>
using namespace std;

int main()
{
    int testCase, maxCap = 0, tempCap = 0;
    cin >> testCase;

    while (testCase)
    {
        int enters, exits;
        cin >> exits >> enters;

        tempCap += enters - exits;
        maxCap = max(tempCap,maxCap);
        testCase--;
    }

    cout << maxCap << endl;

    return 0;
}