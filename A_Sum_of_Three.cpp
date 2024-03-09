#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;
void solve()
{
    IOS;
    int a;
    cin >> a;
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 20; j++)
        {
            if (i + j >= a || i == j)
            {
                continue;
            }
            int b = a - i - j;
            if (b == i || b == j)
                continue;
            if (i % 3 == 0 || j % 3 == 0 || b % 3 == 0)
                continue;
            cout << "YES" << endl;
            cout << i << " " << j << " " << b << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}