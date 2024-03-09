#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,sum=0,lc;
                cin>>a>>b;
    lc=(a*b)/__gcd(a,b);
    if(lc==b)
    {
        sum=(b*b)/a;
        cout<<sum;
    }
    else cout<<lc;
    cout<<endl;    
        
    }
    return 0;
}