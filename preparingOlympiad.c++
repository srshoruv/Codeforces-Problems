#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase)
    {
        int size, mCount = 0, sCount = 0, result;
        cin >> size;
        vector<int> m,s;

        for (int i = 0; i<size; i++)
        {
            int x;
            cin >> x;
            m.push_back(x);
        }

        for (int i = 0; i<size; i++)
        {
            int x;
            cin >> x;
            s.push_back(x);
        }
        s.push_back(0);
        
        for (int i = 0; i<size; i++)
        {
            if (m[i] > s[i+1])
            {
                mCount += m[i];
                sCount += s[i+1];
            }
        }

        result = mCount - sCount;
        cout << result << endl;

        testCase--;
    }
}