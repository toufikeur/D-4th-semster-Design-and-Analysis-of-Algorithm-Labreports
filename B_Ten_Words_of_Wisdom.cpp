#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, ans = 0, big = 0;
        cin >> n;
        long long int a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a < 11 && b > big)
            {
                ans = i + 1;
                big = b;
            }
        }
        cout << ans << endl;
    }

    return 0;
}