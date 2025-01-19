#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, rev = 0;
    cin >> n;

    while (n>0)
    {
        int lastDig = n % 10;
        rev = (rev*10) + lastDig;
        n /= 10;
    }

    cout << rev << endl;

    return 0;
}