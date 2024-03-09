#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1000000007;

/*=================================Debug==================================*/
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << " " << H;
    dbg_out(T...);
}

#define MY
#ifdef MY
#define debug(args...) cerr << "(" << #args << "):", dbg_out(args)
#else
#define debug(args...)
#endif
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    cout << (6 * n - 1) * k << endl;
    for (int i = 0; i < n; i++)
    {
        cout << k * (6 * i + 1) << " " << k * (6 * i + 2) << " " << k * (6 * i + 3) << " " << k * (6 * i + 5) << endl;
    }
    return 0;
}