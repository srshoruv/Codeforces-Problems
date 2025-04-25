#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        
        int n, count = 0;
        cin >> n;

        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '1')
                {
                    count += 1;
                }
                
            }

            if (s[i] == '1')
            {
                count -= 1;
            }
            else if (s[i] == '0')
            {
                count += 1;
            }

        }

        cout << count << endl;       
    }
    return 0;
}