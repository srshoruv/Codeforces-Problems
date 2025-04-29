#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    ll x, newNum = 0, ans = 0;
    cin >> x;

    vector<ll> vec;
    
    while (x)
    {
    	ll lastDig = x % 10;
    	vec.push_back(lastDig);
    	x /= 10;
    }

    for (ll i = 0; i < vec.size(); i++)
    {
    	if (vec[i] > 4)
    	{
    		if ( vec[i] == 9 && i == vec.size() - 1)
    		{
    			vec[i] = vec[i];
    		}
    		else
    		{
    			vec[i] = 9 - vec[i];
    		}
    		
    		
    	}
    }

    reverse(vec.begin(), vec.end());

    for (ll i = 0; i < vec.size(); i++)
    {
    	ans = ans * 10 + vec[i];
    }

    cout << ans << endl;



    
    
    return 0;
}