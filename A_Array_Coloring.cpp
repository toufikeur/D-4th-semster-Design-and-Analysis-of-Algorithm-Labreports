#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 != 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (odd % 2 == 0 && even >= 1)
        {
            cout << "YES" << endl;
        }
        else if (odd % 2 == 0 && even == 0)
        {
            cout << "YES" << endl;
        }
        else if (odd == 0 && even >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}