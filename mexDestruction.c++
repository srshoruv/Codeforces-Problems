#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase)
    {
        vector<int> arr;
        vector<int> pos;
        int size;
        cin >> size;
        int ans = 0;

        for (int i = 0; i < size; i++)
        {
            int x;
            
            cin >> x;
            arr.push_back(x);

            if (x == 0)
            {
                pos.push_back(i); 
            }
        }

        if ( (pos.size() == arr.size() && (pos[0] == 0 && pos[pos.size()-1] == arr.size()-1 )))
        {
            ans = 0;
        } 
        else if (pos.size() == 1 && pos[0] != 0)
        {
            ans = 1;
        }
        else if (pos.size() == 2 && (pos[0] == 0 && pos[pos.size()-1] == arr.size()-1))
        {
            ans = 1;
        }
        
        else
        {
            ans = 2;
        }

        cout << ans << endl;
        testCase--;

    }
    
}