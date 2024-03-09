#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,ans=1;
        cin >> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        v[0]+=1;
        for(int i=0; i<n; i++)
        {
            ans=ans*v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}