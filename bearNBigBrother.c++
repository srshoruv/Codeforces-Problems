#include <iostream>
using namespace std;

int main()
{
    int bear, bob, count = 0;
    cin >> bear >> bob;

    while (bear <= bob)
    {
        bear *= 3;
        bob *= 2;
        count++;
    }

    cout << count << endl;

    return 0;
}