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

    	int n, x, count = 0;
    	cin >> n >> x;
    	vector<int> vec(n);

    	for (int i = 0; i < n; i++)
    	{
    		cin >> vec[i];
    	}

    	sort(vec.begin(), vec.end());
    	reverse(vec.begin(), vec.end());


    	for (int i = 0, cnt = 1; i < n; i++, cnt++)
    	{
    		if (vec[i] * cnt >= x)
    		{
    			count++;
    			cnt = 0;
    		}

    	}

    	cout << count << endl;


    }
    
    return 0;
}