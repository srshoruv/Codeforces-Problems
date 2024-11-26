#include <iostream>
#include <string>
using namespace std;

int main() {
    int input;
    cin >> input;

    while (input) {
        string s;
        cin >> s;

        if (s.length() > 10) {
            string middlePart = to_string(s.length()-2);
            cout << s[0] << middlePart << s[s.length()-1] << endl;
        } else {
            cout << s;
        }
        cout << endl;
        input--;
    }

    return 0;
}
