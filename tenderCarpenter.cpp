#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    

    while (testCase--)
    {
        vector<int> nums;
        int n, count = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        for (int i = 0; i < nums.size()-1; i++)
        {
            if (nums[i] <= nums[i+1])
            {
                count++;
            }
        }

        if (n == 2 && nums[0] <= nums[1])
        {
            count++;
        }

        if (count >= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

    }

    return 0;
}
