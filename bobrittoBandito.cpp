#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n,m,l,r, idx, j = 0;
        cin >> n >> m >> l >> r;

        vector<int> ans;

        for (int i = l; i <= r; i++,j++)
        {
            ans.push_back(i);
            
            

            if (i == 0)
            {
                idx = j;
            }
        }

        int left = ans.size()-idx-1;

       

        if (m > left)
        {
            m = m-left;
            cout << ans[idx - m] << " " << ans[ans.size()-1] << endl;
            
        }
        else
        {
            cout << ans[idx] << " " << ans[idx + m] << endl;
        }
        

        
    }
    return 0;
}