#include <iostream>
using namespace std;

int main()
{
    long int house, ans = 0;
    cin >> house;
    int i = 5;
    while (house)
    {
        int temp = 0;
        
        temp = house / i;
        ans += temp;
        house %= i;
        i--;
    }
    cout << ans << endl;
    return 0;
}