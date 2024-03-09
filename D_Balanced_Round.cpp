#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b,c;
        cin >> a >> b;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            cin>>c;
            v.push_back(c);
            
        }
        sort(v.begin(), v.end());
        long long ans=0,cnt=0;
        for (int i = 1; i < a ; i++)
        {
            if(v[i]-v[i-1]<=b)
            {
                cnt++;
            }
            else 
            {
                ans = max(ans,cnt);
                cnt = 0;
            }
        }
        ans = max(ans,cnt);
        cout<<a-ans-1<<endl;  
    }
    return 0;
}