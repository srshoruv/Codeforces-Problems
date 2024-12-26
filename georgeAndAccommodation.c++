#include <iostream>
using namespace std;

int main()
{
    int rooms, count = 0;
    cin >> rooms;

    for (int i = 0; i < rooms; i++)
    {
        int x,y;
        cin >> x >> y;

        if (y-x >= 2)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}