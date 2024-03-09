#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int k=0;k<n;k++)
    {
        int a,i,c=0,sum=0;
        int ar[a];
        cin >> a;
        for(i = 0; i < a; i++)
        {
            cin >> ar[i];
        }
        for(i= 0; i< a; i++)
        {
            sum=sum+ar[i];
        }
        if(0<=sum){
            cout<<sum;
        }
        else if( sum<0)
            {
            c=sum%2;
            if(c==0){
                cout<<(c*(-1))<<endl;
            }
            else{
                cout<<(c*(-1) +1)<<endl;
            }
        }
    }

}
