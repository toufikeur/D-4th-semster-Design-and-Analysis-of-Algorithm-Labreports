#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0, su = 0, su1 = 0, re1 = 0, re = 0;
        cin >> n;

        vector<int> a(2 * n);
        // vector<int> b, c;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        // su = a[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            su = a[i] - a[i - 1];
            su1 = su1 + su;
            // re = a[i] - a[i - 1];
        }
        // cout << su1 << endl;
        re = a[2 * n - 1];
        for (int i = 2 * n - 1; i > n; i--)
        {
            re = a[i] - a[i - 1];
            re1 = re1 + re;
        }
        sum = su1 + re1;
        cout << sum << endl;

        // for (int i = 2 * n; i > n; i--)
        // {
        //     // su=a[i]-a[i - 1];
        //     su = su - a[i - 1];
        // }
        // cout << su << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     b.push_back(a[i]);
        // }
        // for(int i = n; i < n; i++)
        // {
        //     c.push_back(a[i]);
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << b[i] << " ";
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << c[i] << " ";
        // }

        // cout << sum << endl;

        // int min_path_length = a[2 * n - 1] - a[0];

        // cout << min_path_length << endl;

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " " << a[2 * n - i - 1] << endl;
        }
    }

    return 0;
}
