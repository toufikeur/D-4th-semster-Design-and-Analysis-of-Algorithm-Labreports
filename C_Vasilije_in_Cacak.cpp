#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
       ll n,k,x;
       cin >> n>>k>>x;
        ll max=0,min=0;
        min= (k*(k+1)/2);
        max= (n*(n+1)/2)-((n-k)*(n-k+1)/2);
        if(x>=min && x<=max) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}