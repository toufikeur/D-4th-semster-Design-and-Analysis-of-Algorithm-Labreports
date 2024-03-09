#include <bits/stdc++.h>
using namespace std;

void pri(int t,int n)
{
    cin>>t;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==t)
            {
                 cout<<i<<j<<endl;
                 return 0;
            }
        }
    }

}
int main()
{
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print(t);
}