#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase) {
        int a,b,div,rem, ans;
        cin >> a >> b;
        
        div = a / b;
        rem = a % b;

        if (rem == 0) {
            cout << rem << endl;
        } else {
            ans = (div + 1) * b - a;
            cout << ans << endl;
        }

        testCase--;
    }

    return 0;
}