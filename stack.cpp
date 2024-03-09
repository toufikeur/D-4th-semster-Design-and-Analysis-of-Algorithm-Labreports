#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l, r, a = 0, b = 0;
        cin >> n >> k;
        while (n--)
        {
            cin >> l >> r;
            if (l == k)
                a = 1;
            if (r == k)
                b = 1;
        }
        if (a && b)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}