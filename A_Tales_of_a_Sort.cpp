#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp = 0, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[j] < arr[i])
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    count++;
                }
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        cout<<count<<endl;
    }
}