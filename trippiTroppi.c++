#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        string s,s1,s2,s3,ss1,ss2,ss3;
        cin >> s1 >> s2 >> s3;

        ss1 = s1[0];
        ss2 = s2[0];
        ss3 = s3[0];

        s = ss1+ss2+ss3;
        cout << s << endl;
    
    }

    return 0;
}