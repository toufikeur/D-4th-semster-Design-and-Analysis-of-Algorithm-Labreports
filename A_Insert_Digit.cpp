#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,x,f,z,h,g,m,d;
        cin >> a>>b;
        cin>>x;
        f=x;
        for(int i=a-1;i>=0;i--)
        {
            d=x/(pow(10,i));
            {
                for(int j=i;j>=0;j--)
                {
                    x=x-d*pow(10,j);
                    break;
                }
            }
            ////cout<<d<<endl;
        //    //cout<<i<<endl;
            if(d<b)
            {
               //cout<<i;
              g=f-d;
              h=g*pow(10,i);
              m=b*pow(10,i+1)+d;
              cout<<h+m<<endl;
              //cout<<m;

               break;
            }
            

        }
       

    }
}