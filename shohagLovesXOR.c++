#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        long long x, m, y, count = 0;
        cin >> x >> m;

        for (long long i = 1; i <= m; i++)
        {
            if (x != i)
            {
                y = x ^ i;
                if (x % y == 0 || i % y == 0)
                {
                    count++;
                }
            }
            
            
        }
        

        cout << count << endl;
        return 0;
    }
}