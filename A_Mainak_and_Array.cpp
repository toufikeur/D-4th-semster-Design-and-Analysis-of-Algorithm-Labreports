#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t;
    cin >> t;
    while (t--) 
    {
        long long int n,ans=0;
        cin >> n;
        long long int ar[n];
        vector<long long int>v1;
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for(int i = 0; i < n; i++)
        {
            ans=max(ans,ar[i]-ar[0]);
            ans=max(ans,ar[n-1]-ar[i]);
            ans=max(ans,ar[i]-ar[(i+1)%n]);
        }
        cout<<ans<<endl;
        // sort(v1.begin(), v1.end());
        // cout <<v1[n-1]-v1[0]<<endl;
    }
    return 0;
}