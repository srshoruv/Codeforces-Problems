#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n,k,p; 
        double count = -1;
        cin >> n >> k >> p;

        if (n*p >= abs(k))
        {
            count = (double) abs(k) / p;
            count = ceil(count);
            
        }
        
        cout << count << endl; 

        
    }

    return 0;
}