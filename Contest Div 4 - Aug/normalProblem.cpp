#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase)
    {

        string s;
        cin >> s;
        string ans = s;

        for (int i = s.length() - 1, j = 0; i >= 0; i--, j++)
        {
            if (s[i] == 'p')
            {
                ans[j] = 'q';
            }
            else if (s[i] == 'q')
            {
                ans[j] = 'p';
            }
            else if (s[i] == 'w')
            {
                ans[j] = 'w';
            }
        }

        cout << ans << endl;
        
        testCase--;
    }

    return 0;
    
}