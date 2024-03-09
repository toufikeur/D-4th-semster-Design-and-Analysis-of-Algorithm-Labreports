#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, r = 0, cnt = 0;
        cin >> a >> b >> c;
        string s;
        cin >> s;
        if (a == b)
        {
            cout << "YES" << endl;
            continue;
        }
        r = b;
        for (int i = 0; i < c; i++)
        {
            if (s[i] == '+')
            {
                r++;
                b++;
            }
            else
            {
                r--;
            }

            if (r == a)
            {
                cnt = 1;
                break;
            }
        }
        if (cnt == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (b >= a)
            {
                cout << "MAYBE" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}