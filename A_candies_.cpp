#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long  long  int n, a,i, b;
        cin >> n;
        bool off=true;
        for ( i = 1; i <=n; i++)
        {
            int sum=0;
            for (int j = 0; j <n; j++)
            {
                sum = sum + (pow(2, j)) * i;

                if (sum == n)
                {
                    cout << i << endl;
                    sum= true;
                    break;
                } 
            }
            if(sum == off){
                break;
            }
        }
    }
}