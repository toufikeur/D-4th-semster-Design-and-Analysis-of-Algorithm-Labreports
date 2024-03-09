#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,cnt,p;
        cin >> a>>b;
        int ar[a];
        for(int i=p=1;i<=a;i++)
        {
            cin >> ar[i];
            if(ar[i]==p) p++;
        }
         cnt =(a-p+b)/b;
        cout<<cnt<<endl;
    }
    return 0;
}