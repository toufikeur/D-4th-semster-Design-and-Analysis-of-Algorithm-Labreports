#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false)
#define ll long long
int main()
{
    IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        ll m=*min_element(ar,ar+n);
        m=m*2;
        m--;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
           if(ar[i]%m==0)
            ans+=(ar[i]/m)-1;
        else
            ans+=(ar[i]/m);
        }
        cout<<ans<<endl;
    }
}