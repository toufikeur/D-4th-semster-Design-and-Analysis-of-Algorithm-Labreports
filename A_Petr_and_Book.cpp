#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    int Rp = n;
    int D = 0;
    while (Rp > 0)
    {
        Rp = Rp - v[D];
        D = (D + 1) % 7;
    }
    if(D==0)
    {
        D=7;
    }
    cout << D << endl;
}