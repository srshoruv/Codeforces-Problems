#include <iostream>
#include <string>
using namespace std;

int main() {
    int input;
    cin >> input;
    int count = 0;

    while (input) {
        int a, b, c;

        cin >> a >> b >> c;

        int counter = a + b + c;
        if (counter >= 2) {
            count++;
        }

        input--;
    }

    cout << count;

    return 0;
}