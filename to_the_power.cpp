#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>> a>>b;
    int sum=a;
    for(int i=1;i<b;i++)
    {
        sum=sum*a;
    }
    cout<<sum;
}