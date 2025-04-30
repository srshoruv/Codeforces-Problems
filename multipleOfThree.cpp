#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;


    	int n;
    	cin >> n;

    	if (n % 3 == 0)
    	{
    		cout << n * 3 << endl;
    	}
    	else if (n % 3 == 1)
    	{
    		cout << 3 * (n / 3) << endl;
    	}
    	else if (n % 3 == 2)
    	{
    		cout << 3 * ((n / 3) + 1) << endl;
    	}

    	
    
    return 0;
}