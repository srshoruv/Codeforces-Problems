#include <iostream>
using namespace std;

int main()
{
    int n,h, count=0;
    cin >> n >> h;


    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > h)
        {
            count += 2;
        }
        else
        {
            count++;
        }
    }

    cout << count << endl;
}