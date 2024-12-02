#include <iostream>
#include <vector>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;

    while (testCase){
        int n,k;
        cout << "Inside the loop \n";
        cin >> n >> k;
        vector<int> vec;
        cout << "Vector input \n";
        for (int i=0; i<=n; i++) {
            cin >> vec[i];
        }

        for (int i=0; i<=n; i++) {
            int count = 0;
            if (k == vec[i]) {
                cout << count;
            }
        }
        
        testCase--;

    }
}