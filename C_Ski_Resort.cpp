#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a,b,c;
        cin >> a>>b>>c;
        vector<ll>v(a);
        for(int i=0;i<a;i++)
        {
            cin >> v[i];
        }
        ll ans=0,cns=0;
        for(int i=0;i<a;i++)
        {
            if(v[i]<=c)
            {
                cns++;
                if(i==a-1 || v[i+1]>c)
                {

                    if(cns>=b)
                    {
                        ll x=cns-b+1;
                    ll sum=(x*(x+1))/2;
                    ans+=sum;
                    }
                    cns=0;
                }
            }
        }
        cout<<ans<<endl;
    }


}