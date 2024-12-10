#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase; // Read the number of test cases

    while (testCase--)
    {
        int n, k;
        cin >> n >> k; // Read the size of the array and k value
        vector<int> arr(n);

        // Input the array elements
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool canWin = false;
        int index_to_output = -1;

        // Compare all index pairs (i, j) to check for winning conditions
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && abs(arr[i] - arr[j]) % k != 0) // Winning condition
                {
                    canWin = true; // Mark that a winning condition is found
                    index_to_output = i + 1; // Store the first index (1-based) of the winning pair
                    break;
                }
            }
            if (canWin) break; // Stop further searching after the first winning pair
        }

        if (canWin)
        {
            cout << "YES\n";
            cout << index_to_output << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
