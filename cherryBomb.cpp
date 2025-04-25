#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n, maxLim;
        
        int temp = maxLim;
        bool hasSol = true;
        cin >> n >> maxLim;

        vector<int> vecA(n), vecB(n), ans(n);

        // input

        for (int i = 0; i < n; i++)
        {
            cin >> vecA[i];
        } 

        for (int i = 0; i < n; i++)
        {
            cin >> vecB[i];
        }

        // actual program

        for (int i = 0; i < n; i++)
        {
            if (vecA[i] + vecB[i] > maxLim)
            {
                hasSol = false;
                break;
            }

            if ((vecA[i] + vecB[i] != vecA[n-1] + vecB[i+1]) && (vecB[i] != -1 || vecB[i+1] != -1))
            {
                hasSol = false;
                break;
            }

            if (vecB[i] != -1)
            {
                temp = vecA[i] + vecB[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            vecC[i] = 
        }

    }
    return 0;
}