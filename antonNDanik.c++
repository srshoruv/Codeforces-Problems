#include <iostream>
using namespace std;

int main()
{
    int i, anton = 0, danik = 0;
    cin >> i;
    string s;
    cin >> s;
    

    for (int j = i-1; j >= 0; j--)
    {
        if (s[j]=='A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton\n";
    } 
    else if (anton < danik)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }

    return 0;
}