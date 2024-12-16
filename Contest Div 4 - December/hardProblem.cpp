#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase)
    {
        int seat[4];
        int result = 0;
        int avail = 0;
        for (int i = 0 ; i < 4; i++)
        {
            cin >> seat[i];
        }

            if (seat[0] >= seat[1])
            {
                result += seat[1];
                avail = seat[0] - seat[1];

            }
            else 
            {
                result += seat[0];
            }

            if (seat[0] >= seat[2])
            {
                result += seat[2];
                avail += seat[0] - seat[2];
            }
            else 
            {
                result += seat[0];
            }

            if (avail >= seat[3])
            {
                result += seat[3];
            }
            else 
            {
                result += avail;
            }
            
        
        cout << result << endl;

        testCase--;
    }

    return 0;
    
}