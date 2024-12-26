#include <iostream>
using namespace std;

int main()
{
    long int n;
    long int sum = 0;
    cin >> n;

    if (n % 2 == 0)
    {
        for (long i = 1, j = 1; i <= (n/2); i++)
        {
            sum += (-1*j);
            j += 2;
        }

        for (long i = 1, j = 2; i <= (n/2); i++)
        {
            sum += (1*j);
            j += 2;
        }
    }
    else
    {
        for (long i = 1, j = 1; i <= (n/2) + 1; i++)
        {
            sum += (-1*j);
            j += 2;
        }

        for (long i = 1, j = 2; i <= (n/2); i++)
        {
            sum += (1*j);
            j += 2;
        }
    }

    cout << sum << endl;
    return 0;
}