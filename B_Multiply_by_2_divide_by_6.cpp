#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,cnt2=0,cnt3=0;
        cin >> n;
        while(n%2==0)
        {
            n=n/2;
            cnt2++;
        }
        while(n%3==0)
        {
            n=n/3;
            cnt3++;
        }
      if(n!=1 || cnt2>cnt3) cout<<"-1"<<endl;
      else cout<<2*cnt3-cnt2<<endl;
        
    }
    return 0;
}