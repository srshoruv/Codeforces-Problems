#include <iostream>
#include <string>
using namespace std;

int main() {
  int testCase;
  cin >> testCase;
  
  while(testCase--)
  {
    int w1,w2,k, ans;
    string s = "";
    cin >> w1;
    cin >> w2;
    cin >> k;
    
    ans = (w1 * w2) % 10;
    for (int i = 1; i < k; i++)
    {
      s.push_back('0');
    }
    string num = to_string(ans);
    s.append(num);
    cout << s << endl;
  }
  return 0;
}