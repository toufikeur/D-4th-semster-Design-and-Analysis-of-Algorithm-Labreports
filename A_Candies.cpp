#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a=3;
        cin >> n;
        for(int i=0; i<10^8; i++){
            if(n%a==0){
                cout <<n/a<<endl;
                break;
            }

            a=2*a+1;
        }
    }
    
}