#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a,sum=0,l=1,r,x;
        cin >> a;
        if(a*2-a==1)
        {
            cout<<a*2-a<<endl;
        }
        else if(a%2)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<a/2+a*2-a-a;i++)
            {
                cout<<2*i-i*2+i+i+2*2-2<<" "<<2*i-i-i+2*i+1*1<<" ";
                cout<<endl;
            }
        }





    //     for(int i = 1; i<=a; i++)
    //     {
    //         sum+=i;
    //     }
    //     r=a;
    //     x=r-l+1;
    //     if(a==1)
    //     {
    //         cout<<"1"<<endl;
    //     }
    //    else if(sum%r==0)
    //     {
    //         cout<<"-1"<<endl;
    //     }
    //     else
    //     {
    //         for(int i=1; i<=a; i++)
    //         {
    //             cout<<i<<" ";
    //         }
    //         cout<<endl;
    //     }

    }
    return 0;
}