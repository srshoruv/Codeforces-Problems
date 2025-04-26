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

    	int x,y,a;

    	cin  >> x >> y >> a;
    	
    	if (a % (x+y) < x)
    	{
    		cout << "NO\n";
    	}
    	else
    	{
    		cout << "YES\n";
    	}

    }
    
    return 0;
}