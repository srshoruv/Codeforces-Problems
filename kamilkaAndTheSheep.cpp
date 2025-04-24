#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);

        for (int i=0; i<n; i++)
        {
            cin >> vec[i];
        }

        // int maxVal = vec[0];
        // int minVal = vec[0];

        // for  (int i = 0; i < n; i++)
        // {
        //     maxVal = (maxVal < vec[i]) ? vec[i] : maxVal;
        //     minVal = (minVal > vec[i]) ? vec[i] : minVal;
        // }

        sort(vec.begin(), vec.end());
        cout << vec[n-1] - vec[0] << endl;

    }
    return 0;
}