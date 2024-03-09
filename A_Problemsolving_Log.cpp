#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        vector<int> v(26);
        string str;
        cin >> n>>str;
        for(int i=0; i<n; i++)
        {
            v[str[i]-'A']++;
        }
        int x=0;
        for(int i=0; i<26; i++)
        {
            if(v[i]>=(i+1))
            {
                x++;
            }
        }
        cout<<x<<endl;

    }
}