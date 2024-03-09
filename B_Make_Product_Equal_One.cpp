#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, x = 0, ans = 0, minu = 0, ze = 0;
    cin >> n;
    ll v[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (v[i] < 0)
            minu++;
    }
    if (minu % 2 == 0)
    {
        for (ll i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                ans += ((1 - v[i]) - 2);
            }
            else if (v[i] == 0)
            {
                ans += 1;
            }
            else
            {
                ans += v[i] - 1;
            }
        }
    }
    else
    {
        ans = 0, ze = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                ze++;
            }
        }
        if(ze == 0){
            {
                for (ll i = 0; i < n; i++)
                {
                    if (v[i] < 0)
                    {
                        ans += 1 - v[i];
                        x = i;
                        break;
                    }
                }
            }
            for (ll i = 0; i < n; i++)
            {
                if (i == x)
                {
                    continue;
                }
                if (v[i] < 0)
                {
                    ans += ((1 - v[i]) - 2);
                }
                else if (v[i] == 0)
                {
                    ans += 1;
                }
                else
                {
                    ans += v[i] - 1;
                }
            }
        }
        if (ze > 0)
        {
            for (ll i = 0; i < n; i++)
            {
                if (v[i] == 0)
                {
                    v[i] = -1;
                    ans = 1;
                    break;
                }
            }

            for (ll i = 0; i < n; i++)
            {
                // if(i==x){
                //     continue;
                // }
                if (v[i] < 0)
                {
                    ans += ((1 - v[i]) - 2);
                }
                else if (v[i] == 0)
                {
                    ans += 1;
                }
                else
                {
                    ans += v[i] - 1;
                }
            }
        }        
    }
    cout << ans << endl;
    return 0;
}