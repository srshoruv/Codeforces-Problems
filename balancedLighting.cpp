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

    	int n, red = 0, blue = 0, empty = 0;
    	cin >> n;

    	vector<int> vec(n);

    	for (int i = 0; i < n; i++)
    	{
    		cin >> vec[i];

    		if (vec[i] == 1 )
    		{
    			red++;
    		}
    		else if (vec[i] == 2)
    		{
    			blue++;
    		}
    		else
    		{
    			empty++;
    		}
    	}

    	if (n % 2 == 1)
    	{
    		cout << "No\n";
    	}
    	else
    	{
    		int minVal = min(red,blue);
    		int maxVal = max(red,blue);

    		if ((minVal + empty) >= maxVal)
    		{
    			cout << "Yes\n";
    		}
    		else
    		{
    			cout << "No\n";
    		}
    	}

    }
    
    return 0;
}