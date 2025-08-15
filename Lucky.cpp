#include <iostream>
using namespace std;
int main()
{
    int tickets;
    cin >> tickets;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 1; i <= tickets; i++)
    {
        string num;
        cin >> num;
        sum1 = (num[0] - '0') + (num[1] - '0') + (num[2] - '0');
        sum2 = (num[3] - '0') + (num[4] - '0') + (num[5] - '0');
        if (sum1 == sum2)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}