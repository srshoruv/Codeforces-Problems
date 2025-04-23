#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n;
        string s;
        cin >> n; 
        cin >> s;
        vector<int> st(n);

        int max = n;
        int min = 1;

        for (int i = n-2; i >= 0; i--)
        {

            if (s[i] == '<')
            {
                st[i+1] = min++;
            }

            if (s[i] == '>')
            {
                st[i+1] = max--;

            }
        }
        st[0] = min;

        for (int i = 0; i < st.size(); i++)
        {
            cout << st[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}