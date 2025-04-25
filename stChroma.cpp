#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n, x, target;
        cin >> n >> x;

        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            vec[i] = i;

            if (x == i)
            {
                target = i;
            }
        }

        if (x <= n-1)
        {
            int temp = vec[n-1];
            vec[n-1] = x;
            vec[target] = temp;
        }

        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }

        cout << endl;

    }
    return 0;
}