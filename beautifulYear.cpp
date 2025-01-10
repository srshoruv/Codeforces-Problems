#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    bool is_Beautiful = false;
    cin >> num;
    // ++num;

    string number = to_string(num);
    
    while (!is_Beautiful)
    {
       for (int i = 0; i < number.size() - 1; i++)
        {
            for (int j = i+1; i < number.size(); j++)
            {
                if (number[i] == number[j])
                {
                    is_Beautiful = false;
                    break;
                }
                else
                {
                    is_Beautiful = true;
                }
                
            }

            if (!is_Beautiful)
            {
                break;
            }
            else
            {
                is_Beautiful = true;
            }

        }
        
        num++;
        number = to_string(num);

     
    }

    cout << num;

    return 0;
}