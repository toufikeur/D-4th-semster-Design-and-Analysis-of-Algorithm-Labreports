#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
void solve()
{
    IOS;
    long long n,sum1=0,sum2=0;
        cin>>n;
        vector<int>v1(n),v2(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v2[i];
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        for(int i=0;i<n;i++)
        {
            if(abs(v1[i]-v2[i])>1 || v2[i]<v1[i])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    cout<<"YES"<<endl;  
    return; 
}
int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}