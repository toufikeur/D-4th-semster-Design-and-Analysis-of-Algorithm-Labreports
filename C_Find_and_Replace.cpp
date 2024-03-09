#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,cnt=0,mn=0;
        cin >> n;
        string str;
        cin >> str;
        vector<string> v1;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'a')
            {
                v1.push_back("0");
                mn++;
            }
            else
                v1.push_back("1");
        }
        for (int i = 1; i < n; i++)
        {
            if(v1[i]==v1[i-1])
            {
                cnt++;
            }
        }
        if(cnt==0 || mn>=1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}