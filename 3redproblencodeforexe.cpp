#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n ;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[i+1]){
                count++;
            }
        }
        cout<<count-1;
    }
    return  0;
}
