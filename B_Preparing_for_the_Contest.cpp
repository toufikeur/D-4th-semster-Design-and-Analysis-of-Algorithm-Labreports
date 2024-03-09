#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
       long long int a, b;
        cin >> a >> b;
        for (long long int i = a-b; i >=1; i--)
            {
                cout<<i<<" ";

            }
            for(long long int i=a-b+1;i<a+1;i++)
            {
                cout << i << " ";
            }
             cout << endl;
        }
       
 }