#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY\n";
    return 0;
}