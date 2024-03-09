#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, sum = 0;
        cin >> n;
        vector<int> v[n], v2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a >> ;
            v.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + v[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = n-1; j > 0; j--)
            {
                if (v[j] != v[i])
                {
                    v2.push_Back(v[j]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v2[i] << " " << endl;
        }
    }
}