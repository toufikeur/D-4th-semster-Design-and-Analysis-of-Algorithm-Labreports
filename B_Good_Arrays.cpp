#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, count = 0;
    cin >> t;
    while (t--)
    {
        long long int n, a, count=0,sum = 0;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (long long int i = 0; i < n; i++)
        {
            sum = sum + v[i];

            if (v[i] == 1)
            {
                count++;
            }
        }
        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else if (sum >= n + count)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
        
    }
    return 0;
}