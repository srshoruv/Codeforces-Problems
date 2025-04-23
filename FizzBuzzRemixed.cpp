#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int input, count = 0;
        cin >> input;

        for (int i = 0; i <= input; i++)
        {
            if (i % 3 == i % 5)
            {
                count++;
            }
        }
        cout << count << endl;
        
    }
    return 0;
}