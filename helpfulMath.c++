#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,temp;
    cin >> s;


    for (int i=0; i<s.length(); i++) {
        if (s[i]!= '+') {
            temp.push_back(s[i]);
        }
    }

    sort(temp.begin(), temp.end());

    for (int i=0; i<temp.length(); i++) {
        cout << temp[i] << "+";
    }
    temp.pop_back();
}