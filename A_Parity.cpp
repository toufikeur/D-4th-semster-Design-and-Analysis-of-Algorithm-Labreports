#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b, k, cnt = 0;
    cin >> b >> k;
    int ar[k];
    for (int i = 0; i < k; i++)
    {
        cin >> ar[i];
    }
    if (b % 2 == 0)
    {
        if (ar[k - 1] % 2 == 0)
        {
            cout << "even" << endl;
        }
        else if (ar[k - 1] % 2 != 0)
        {
            cout << "odd" << endl;
        }
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            if (ar[i] % 2 != 0)
            {
                cnt++;
            }
        }
        if (cnt % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
}