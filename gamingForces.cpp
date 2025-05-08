#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int testCase;
    cin >> testCase;

    while (testCase--)
    {

    	int n, count1 = 0, count2 = 0, result = 0;
    	cin >> n;

    	for (int i = 0; i < n; i++)
    	{
    		int x;
    		cin >> x;
    		if ( x == 1)
    		{
    			count1++;
    		}

    		else
    		{
    			count2++;
    		}
    	}

    	result = count2 + (count1 / 2) + (count1 % 2);
    	cout << result << endl;

    }
    
    return 0;
}