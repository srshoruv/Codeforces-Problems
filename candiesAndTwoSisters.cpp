#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n, ans = 0;
        cin >> n;

        if (n % 2 == 0)
        {
            ans = (n / 2) - 1;
        }
        else
        {
            ans = n / 2;
        }

        cout << ans << endl;
    }

    return 0;
}