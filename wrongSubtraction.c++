#include <iostream>
using namespace std;

int main()
{
    int num, k;
    cin >> num >> k;

    for (int i=1; i <= k; i++)
    {
        if (num % 10 == 0)
        {
            num = num / 10;
        }
        else
        {
            num--;
        }
    }

    cout << num << endl;
    return 0;
}