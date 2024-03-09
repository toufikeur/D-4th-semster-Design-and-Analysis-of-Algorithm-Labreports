#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ar[100];
        cin >> a >> b;
        int x = -1, y = -1, z;
        for (int i = 1; i <= a; i++)
            cin >> ar[i];
        for (int i = 1; i <= a; i++)
        {
            cin >> z;
            if (ar[i] + i - 1 <= b)
            {
                if (z > x)
                    x = z, y = i;
            }
        }
        cout << y << endl;
    }
}