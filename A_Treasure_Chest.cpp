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
            df = y - x;
            if (df > k)
            {
                int m = x + k;
                if (m > mx)
                {
                    mx = mx + (m - mx);
                }
                else
                {
                    mx = mx + (mx - m);
                }
            }
        }
        cout << mx << endl;
    }
}
