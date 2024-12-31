#include <iostream>
using namespace std;

int main() {
  int testCase;
  cin >> testCase;
  
  while (testCase--)
  {
    int n , k, ans = 0, rem, i = 0, rev = 0;
    cin >> n >> k;
    
    while (n)
    {
      rem = n % k;
      n /= k;
      ans = rem + (ans * 10);
      i++;
    }
    while (i--)
    {
        rem = ans % 10;
        rev = (rev * 10) + rem;
        ans /= 10;
    }
    cout << rev << endl;
  }
  return 0;
}