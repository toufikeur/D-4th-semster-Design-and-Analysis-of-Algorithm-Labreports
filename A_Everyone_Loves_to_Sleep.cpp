#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {

        ll n, h, m;
        cin >> n >> h >> m;
        ll xa = h * 60 + m;
        ll hr[n], mn[n];
        ll xh, xm;
        ll min = 1000000000;
        ll mins[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> hr[i] >> mn[i];
            ll xx = hr[i] * 60 + mn[i];
            if (xx >= xa)
            {
                mins[i] = xx - xa;
            }
            else
            {
                mins[i] = ((24 * 60) - xa) + xx;
            }
        }
        sort(mins, mins + n);
        ll ansh = -1, ansm = -1;
        ansh = (mins[0] / 60);
        ansm = (mins[0] % 60);

        cout << ansh << " " << ansm << "\n";
    }

    return 0;
}