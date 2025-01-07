#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int matrix[5][5];
    int temp1, temp2, count = 0;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                temp1 = i;
                temp2 = j;
            }
        }
    }

    count = abs(2-temp1) + abs(2-temp2);
    cout << count << endl;

    return 0;
}