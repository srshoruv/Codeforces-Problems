#include <iostream>
using namespace std;

int main() {
    // your code goes here
    long long testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n, prev, pres;
        cin >> n;
        cin >> prev;
        cout << "1";
        for (int i = 0; i < n - 1; i++)
        {
            cin >> pres;
            if (pres > prev)
            {
                cout << " 1";
            }
            else
            {
                cout << " 0";
            }
            prev = max(prev,pres);
        }
        cout << endl;
    }

}