#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, x;
        vector<long long int> v1;
        cin >> a >> b >> c;
        if (a / c == b / c)
        {
            cout << (a / c + b % c) << endl;
        }
        else
        {
            cout << max(b / c + b % c, b / c - 1 + (c - 1)) << endl;
        }
        // sort(v1.begin(), v1.end());
        // cout << v1[v1.size() - 1] << endl;
    }
    return 0;
}