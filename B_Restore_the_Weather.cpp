#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int ele, arr[n], arr2[n];

        vector<pair<int, int>> v1(n);
        vector<pair<int, int>> v2(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            v1[i].first = ele;
            v1[i].second = i;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            v2[i].first = ele;
            v2[i].second = i;
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        int print_arr[n];
        for (int i = 0; i < n; i++)
        {
            print_arr[v1[i].second] = v2[i].first;
        }
        for (int i = 0; i < n; i++)
            cout << print_arr[i] << " ";

        cout << "\n";
    }
    return 0;
}