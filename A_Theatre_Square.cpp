#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, a, x, y, z;
    cin >> n >> m >> a;
    if (n % a == 0)
    {
        x = n / a;
    }
    else if (n % a != 0)
    {
        x = (n / a) + 1;
    }
    if (m % a == 0)
    {
        y = m / a;
    }
    else if (m % a != 0)
    {
        y = (m / a) + 1;
    }
    z = x * y;
    cout << z << endl;
}