#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a>>b;
        ll ans =(a+b-1)/b;
        if(a%b >1 ||( a%b==0 && b>1))
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}