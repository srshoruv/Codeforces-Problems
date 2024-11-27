#include <iostream>
#include <vector>
using namespace std;

int main(){
    int target,size, count = 0, ans;
    cin >> size >> target;

    int arr[size];

    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<size; i++) {
        if (arr[size-i-1] >= arr[target-1] && arr[size-i-1] > 0) {
            break;
        } else {
            count++;
        }
    }
    ans = size - count;
    cout << ans;
    return 0;
}