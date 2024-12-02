#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count=0;
    int len = s.length()-1;
    vector<int> countVec;

    countVec.push_back(s.length());

    for (int i=len; i>0; i--) {
        if (s[i] == '.') {
            countVec.push_back(s.length() - count);
        }
        count++;
    }
    
    countVec.push_back(0);
    
    int i = 0;

    while (countVec[i] != 0) {
        for (int j = countVec[i+1]; j < countVec[i] - 1; j++) {
            cout << s[j];
        }
        cout << " ";
        i++;
    }

    return 0;
}