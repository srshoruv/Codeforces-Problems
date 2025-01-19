#include <bits/stdc++.h>
using namespace std;

bool beautiful (int num, bool is_Beautiful = false)
{
    string number = to_string(num);

    for (int i=0; i < number.size() - 1; i++)
    {
        for (int j = i+1; j < number.size(); j++)
        {
            if (number[i] == number[j])
            {
                is_Beautiful = false;
                break;
            }
        }
    }
    return is_Beautiful;
}

int main()
{
    int num;
    bool is_Beautiful = false;
    cin >> num;

    string number = to_string(num);

    

    if (!is_Beautiful)
    {
        num++;
        number = to_string(num);
        beautiful(num);
    }

    cout << num;

    return 0;
}