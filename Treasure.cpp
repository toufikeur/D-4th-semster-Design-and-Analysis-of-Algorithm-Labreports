#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k, mx, df;
        cin >> x >> y >> k;
        mx = max(x, y);
        if (x < y)
        {
            df = x - y;
            if (df > k)
            {
                int m = x + k;
                mx = mx + (m - mx);
            }
        }
        cout << mx << endl;
    }
}
