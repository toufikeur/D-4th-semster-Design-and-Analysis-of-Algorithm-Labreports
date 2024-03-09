#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,a, b, c;
        cin >> a >> b >> c;
        vector<ll> v, v1;
        if ((c * (b + 1) - 1) % (a - 1) == 0)
        {

            n = (c * (b + 1) - 1) / (a - 1);
        }
        else
        {
            n = ((c * (b + 1) - 1) / (a - 1)) + 1;
        }
        cout << n + c << "\n";
    }
    return 0;
}