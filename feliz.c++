#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;

    if (s == "N")
    {
        for (int i = 0; i < n;  i++)
        {
            cout << "Feliz Ano Nuevo\n";
        }
    }
    else
    {
        for (int i = 0; i < n;  i++)
        {
            cout << "Happy New Year\n";
        }
    }

    return 0;

    
}