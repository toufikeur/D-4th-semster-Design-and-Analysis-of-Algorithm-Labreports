#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a,b,c,x,y,z;
        cin >> a >> b >> c;
        x=abs(a-b);
        y=abs(a-c);
        z=abs(c-b);
        if(z%2==0) cout<<"1"<<" ";
        else cout<<"0"<<" ";
        if(y%2==0) cout<<"1" <<" ";
        else cout<<"0" <<" ";
        if(x%2==0) cout<<"1" <<" ";
        else cout<<"0";
        cout<<endl;
       
    }
}