#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i,n,count = 0,cnt = 0;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(arr[i]%2==0)
            {
                count++;
                int ar[count];
                //cout<<i<<endl;
                ar[count]=arr[i];
                

            }
            else
            {
                cnt++;
            }
           // cout<<arr[count];
           // break;
        }
        //cout<<cnt;
        int ar[count];
        int arx[cnt];
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                for(int j=0; j<count; j++)
                {    
                ar[count]=arr[i];
                }
            }
        }
        for(int i=0; i<n;i++) 
        {
         if(arr[i]%2!=0)
            {
                for(int k=0; k<cnt; k++)
                {    
                arx[cnt]=arr[i];
                }
            }
        }
        
        for(int i=1; i<cnt; i++)
        {
            cout<<arx[i]<<endl;
        }
    }
}