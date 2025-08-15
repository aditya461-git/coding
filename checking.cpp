#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = "codeforces";
    for (int i = 1; i <= n; i++)
    {
        char c;
        cin >> c;
        if (c == s[0] ||c == s[1] ||c == s[2] ||c == s[3] ||c == s[4] ||c == s[5] ||c == s[6] ||c == s[7] ||c == s[8] ||c == s[9])
        {
            cout << "yes"<<endl;
        }
        else
        {
            cout << "no"<<endl;
        }
    }
    return 0;
}