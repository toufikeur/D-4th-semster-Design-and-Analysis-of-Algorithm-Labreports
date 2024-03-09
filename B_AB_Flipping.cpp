#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B')
                ans--;
            else
                break;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == 'A')
                ans--;
            else
                break;
        }
        if (ans >= 0)
            cout << ans << endl;
        else
            cout << "0" << endl;
    }
}