#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string str;
        ll one=0,ze=0;
        cin >> str;
        for(int i = 0; i <str.size(); i++)
        {
            if(str[i]=='1') one++;
            else ze++;
        }
        for(int i = 0; i <str.size(); i++)
        {
            if(str[i]=='1')
            {
                if(ze>0) ze--;
                else break;
            }
            else 
            {
                if(one>0) one--;
                else break;
            }
        }
        cout<<ze+one<<endl;
    }
    return 0;
}