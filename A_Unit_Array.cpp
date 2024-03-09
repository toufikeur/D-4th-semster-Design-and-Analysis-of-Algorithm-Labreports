#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int pos = 0, neg = 0, ans = 0, n;
        cin >> n;
        vector<long long int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v1[i] > 0)
            {
                pos++;
            }
            else
                neg++;
        }
        while (neg > pos)
        {
            pos++;
            neg--;
            ans++;
        }
        if (neg % 2 == 1)
        {
            ans++;
        }
        cout << ans << endl;
    }
}