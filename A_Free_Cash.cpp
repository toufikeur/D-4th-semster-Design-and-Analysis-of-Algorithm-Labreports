#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t,count=1,mxz=1;
   cin >> t;
    long long a,b,c,d;
   for(int i=0; i<t; ++i)
   {
    cin>>a>>b;
    if(i!=0)
    {
        if(a==c && b==d)
        {
            count++;
            mxz =max(count,mxz);
        }
    else
    {
        count=1;
    }
    }
    c=a;
    d=b;
    }
   cout<<mxz<<endl;
   }
   