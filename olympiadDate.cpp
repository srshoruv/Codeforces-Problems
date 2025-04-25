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

    	int n, max = 0;
    	cin >> n;
    	bool hasFound = false;
    	vector<int> vec, vec2(n);
    	vec = {0,1,0,3,2,0,2,5};

    	for (int i=0; i<n; i++)
    	{
    		cin >> vec2[i];
    	}

    	for (int i = 0; i < vec.size(); i++)
    	{
    		for (int j = 0; j < n; j++)
    		{
    			if (vec[i]==vec2[j])
    			{
    				vec2[j] = -1;
    				hasFound = true;

    				if (max < j)
    				{
    					max = j;
    					break;
    					
    				}
    				hasFound = false;
    				
    			}
    			
    			
    		}
    		

    	}

    	if (hasFound)
    	{
    		cout << max << endl;
    	}
    	else
    	{
    		cout << 0 << endl;
    	}

    }
    
    return 0;
}