#include <bits/stdc++.h>
using namespace std;

int main()
{
    int upper = 0, lower = 0;
    string s;
    cin >> s;

    for (int i = 0; i < (int) s.length(); i++)
    {
        if (s[i] >= 'a')
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }

    if (upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(),::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(),::tolower);
    }

    cout << s << endl;

    return 0;

}