#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,s=0, count = 0;
        cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        s=v[i]+v[i+1];
        for (int i = 0; i < n - ; i++)
        {
            if (v[i] + v[i + 1] == s)
            {
                count++;
            }
            // while((i+2)!=n)
            // {
            // if(v[i]+v[i+1] == v[i+1]+v[i+2])
            // }
        }
        cout << count+1 << endl;
        // if (count == n - 1)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        //     cout << "NO" << endl;
    }
}