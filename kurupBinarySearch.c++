#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        vector<long long> vec;
        long long n;
        cin >> n;
        for (long long i = 1; i <= 1000000000000000; i++)
        {
            long long num = i, count = 0;
            while (num)
            {
                int lastDig;
                lastDig = num % 10;
                num /= 10;
                if (lastDig == 7 || lastDig == 8)
                {
                    count++;
                    break;
                }
                
            }

            if (!count)
            {
                vec.push_back(i);
            }
            
        }

        cout << vec[n-1] << endl;
    }
}