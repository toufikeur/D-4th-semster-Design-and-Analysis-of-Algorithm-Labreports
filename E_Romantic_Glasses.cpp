#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
   long long int n; cin >> n;
    vector<long long int> v(n);
    map<long long int, long long int> mp;
        mp[0] = 1;
        long long int ans = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if (i % 2 == 0)sum = sum + v[i];
            else sum = sum - v[i];
 
            if (mp[sum])
                ans = 1;
            else
                mp[sum]++;
        }
        if (ans)cout << "YES" << endl;  
        else cout << "NO" << endl;   
    }
    return 0;
}
