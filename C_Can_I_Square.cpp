#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0,sl;
        cin>>n;
        long long int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        for(int i=0; i<n; i++)
        {
            sum=sum + ar[i];
        }
        sl=sqrt(sum);
        if((sqrt(sum)-sl)==0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
}