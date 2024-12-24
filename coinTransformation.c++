#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int x, coins = 0;
        cin >> x;

        if (x <= 3)
        {
            cout << x << endl;
        }
        else
        {
            
            // 5
            
            while (x > 3)
            {
                
                if (x / 4)
                {
                    coins += 2;
                }
                
                x /= 4;
            }
        }

        cout << coins << endl;
    }

}