#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long int a,b,cnt=0;
        cin >> a>>b;
        string str;
        cin >> str;
        map<char,int>mp;
        for(int i=0;i<a;i++)
        {
            mp[str[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second%2!=0) cnt++;

        }
        if(cnt-1<0) cnt=0;
        else cnt=cnt-1;
        if(b>=cnt && b<=a)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}