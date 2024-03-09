#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
            if(str[0]=='a')
            {
                cout<<"YES"<<endl;
                //break;
            }
            else
            {
                if(str[0]=='b' && str[1]=='a')
                {
                    cout<<"YES"<<endl;
                }
                //else cout<<"NO"<<endl;
                else if(str[0]=='c' && str[1]=='b')
                {
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }