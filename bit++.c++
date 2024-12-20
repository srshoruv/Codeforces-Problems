#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    int num = 0;
    while (testCase)
    {   string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '+' && s[i+1] == '+')
            {
                num++;
            }
            else if (s[i] == '-' && s[i+1] == '-')
            {
                num--;
            }
        }
        testCase--;
    }

    cout << num << endl;
}