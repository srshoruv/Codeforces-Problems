#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int arr[5] = {1,3,5,7,9};
        int n , d;
        long long int num = 0, digits = 1;
        cin >> n >> d;
        while (n)
        {
            digits *= n;
            n--;
        }
        cout << "digits = " << digits << endl;
        for (long long i = 0; i < digits; i++)
        {
            num = (num*10) + d;
        }
        
        cout << "num = " << num << endl;
        for (int i = 0; i < 5; i++)
        {
            if (num % arr[i] == 0)
            {
                cout << arr[i] << " ";
            }
        }

        cout << endl;
        
    }

}