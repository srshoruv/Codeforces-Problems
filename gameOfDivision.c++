#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n, k;
        cin >> n  >> k;
        vector<int> arr(n);

        for (int i = 0; i<n; i++)
        {
            cin >> arr[i];
        }

        bool isWin = false;
        int index = -1;

        for (int i = 0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (abs(arr[i] - arr[j]) % k !=0 && i != j)
                {
                    isWin = true;
                    index = i + 1;
                    break;
                }
            }

            if (isWin) break;
        }

        if (isWin) 
        {
            cout << "Yes \n";
            cout << index << endl;
        }
        else
        {
            cout << "No \n";
        }

    }

    return 0;
}