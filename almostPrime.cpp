#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n)
{
    if (n == 2)
        return true;
    if (n % 2 == 0 || n < 2)
        return false;
    for (ll i = 3; i * i <= n; i+=2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll n;
    cin >> n;
    vector<bool> v1(n + 1, 0);
    v1[2] = 1;
    for (int i = 3; i <= n; i+=2)
    {
        if (isPrime(i))
        {
            v1[i] = 1;
        }
    }
    int cnt1=0,cnt2=0;
    for (int i = 6; i <= n; i++)
    {
        cnt1 = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0 && v1[j])
            {
                cnt1++;
            }
            if (cnt1 > 2) break;
        }
        if (cnt1 == 2){
            cnt2++;
        }
    }
    cout << cnt2 << endl;
}