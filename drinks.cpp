#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,num, sum;
    double avg;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum += num;
    }

    avg = sum / n;
    cout << avg << endl;

    return 0;
}