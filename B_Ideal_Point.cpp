#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,x,y;
        int cnt1=0,cnt2=0;
        vector<int> v1,v2;
        cin >> a>>b;
      while(a--)
        {
            cin >>x>>y;
            if(x==b)
            cnt1=1;
            if(y==b)
            cnt2=1;
        }
        if(cnt1 && cnt2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
    
}