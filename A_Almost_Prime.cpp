#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,j,i,cnt1=0,cnt2=0,x=0,nmb=0;
    cin >>n;
    vector<long long int >v1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                cnt1++;
            }
        }
        if(cnt1==1)
        {
            v1.push_back(i);
            cnt2++;
        }
        cnt1=0;
    }
    for(int i=6;i<=n;i++)
    {
        x=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                for(int k=0;k<v1.size();k++)
                {
                    if(j==v1[k])
                    {
                     x++;
                     break;
                    }
                }
            }
        }
        if(x>=2)
        {
            nmb++;
        }
    }
    cout<<nmb<<endl;
   
}