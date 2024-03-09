#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b;
        cin >> a>>b;
        vector<ll> v(a+1,0);
        for(int i=1;i<=a;i++)
        {
            cin>>v[i];
        }
        vector<ll>pre(a+1,0);
        for(int i=1;i<=a;i++)
        {
            pre[i] = pre[i-1]+v[i];
        }
        while(b--)
        {
            ll l,r;
            cin >> l>>r;
            ll k;
            cin >> k;
            ll sum=pre[a];
            sum-=(pre[r]-pre[l-1]);
            sum+=((r-l+1)*k);
            if(sum%2==1)
            {
                cout<<"YES"<<endl;  
            }
            else 
            {
                cout<<"NO"<<endl;
            }


        }
    }
    return 0;
}