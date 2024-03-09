#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x=0,y=0,z;
        vector<int>v1;
        cin >> n;
        int ar[n];
        if(n==1)
        {
            cout<<"69";
        }
        else if(n%2!=0)
        {
            for(int i=n; i>=1; i--)
            {
                cout<<"7"<<" ";
            }
        }
        else 
         {
           for(int i=0;i<n;i++)
            {
               ar[i]=2;
               ar[0]=3;
               ar[1]=1;
               cout<<ar[i]<<" ";
            } 
        }
        cout<<endl;
    }
}