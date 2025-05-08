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

    	int n,h;
    	cin >> n >> h;

    	vector <int> charge(n);
    	vector <int> damage(n);

    	int maxDam = 0;
    	int maxI = 0;

    	for (int i = 0; i < n; i++)
    	{
    		cin >> charge[i] >> damage[i];

    		if (damage[i] > maxDam)
    		{
    			maxDam = damage[i];
    			maxI = i;
    		}
    	}

    	int div = h / maxDam;
    	int rem = h % maxDam;

    }
    
    return 0;
}