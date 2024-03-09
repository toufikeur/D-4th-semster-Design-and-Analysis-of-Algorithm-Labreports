#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll t,mx=1,cnt=1; cin>>t;
    ll a,b,c,d;
    for (int i = 0; i < t; ++i)
    {
        cin>>a>>b;
        if(i!=0){
            if(a==c && b==d) {
                cnt++;
                mx = max(cnt,mx);
            }
            else cnt=1;
        }
        c=a; d=b;
 
    }
    
    cout<<mx<<endl;
}