#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, sm = 0, sb = 0;
        cin >> n;
        vector<ll> v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                v1.push_back(a);
            }
            else
                v2.push_back(a);
        }
        for (int i = 0; i < v1.size(); i++)
        {
            sm += v1[i];
        }
        for (int i = 0; i < v2.size(); i++)
        {
            sb += v2[i];
        }
        if (sm > sb)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}