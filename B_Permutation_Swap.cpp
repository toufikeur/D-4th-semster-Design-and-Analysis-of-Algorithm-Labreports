#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while (t--) 
    {
        int n,a,ans=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a;

            if(abs(a-i)!=0) 
            {
                ans=__gcd(ans,abs(a-i));
            }
        }
    
    cout<<ans<<endl;
    
}
}