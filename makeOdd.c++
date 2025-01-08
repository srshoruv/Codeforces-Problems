#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long testCase;
	cin >> testCase;
	
	while (testCase--)
	{
	    string s1, s2;
	    int n, count = 0;
	    cin >> n;
        cin >> s1 >> s2;
	    
	    for (int i = 0; i < n; i++)
	    {
	        count += min(s1[i] - '0', s2[i] - '0');
	    }

        if (count % 2 == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
	}

}
