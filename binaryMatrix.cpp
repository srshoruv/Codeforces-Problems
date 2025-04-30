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

    	int n, m;
    	cin >> n >> m;

    	vector<vector<int>> mat(n, vector<int>(m));

    	for (int i = 0; i < n; i++)
    	{
    		for (int j = 0; j < m; j++)
    		{
    			cin >> mat[i][j];
    		}
    	}

    	// for (int i = 0; i < n; i++)
    	// {
    	// 	for (int j = 0; j < m; j++)
    	// 	{
    	// 		cout << mat[i][j] << " ";
    	// 	}
    	// 	cout << endl;
    	// }

    	int colSum = 0, rowSum = 0, change = 0;

    	for (int i = 0; i < n; i++)
    	{
    		
    		for (int j = 0; j < m; j++)
    		{
    			rowSum += mat[i][j];
    			// colSum += mat[j][i];
    		}
    		// cout << "New sum: " << rowSum << endl;


    		if (rowSum != 0 && rowSum != 2)
    		{
    			change++;
    		
    		// if (colSum != 0 || colSum != 2)
    		// {
    		// 	change++;
    		// }
    		}
    		rowSum = 0;

    	}

    	cout << change << endl;

    }
    
    return 0;
}