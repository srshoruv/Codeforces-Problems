#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    
    cin >> s;
    int count = s.length();

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i+1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                count--;
                break;
            }
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }

    return 0;

}