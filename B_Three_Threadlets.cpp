#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    vector<long long> v(3);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    long long  n = v.size();
    sort(v.begin(), v.end());
    while (v[0] != v[v.size() - 1] && ans < 3)
    {
      long long d = v[v.size() - 1];
      v[v.size()-1] = v[0];
      v.push_back(d - v[0]);
      sort(v.begin(), v.end());
      ans++;
    }
    if (v[0] != v[v.size() - 1])
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }
  return 0;
}