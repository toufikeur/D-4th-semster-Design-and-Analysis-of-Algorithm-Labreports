#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
   
    cin >> t;
    while(t--)
    {
         vector<int>v1,v2,v3,v4;
        int n,a=0,b=0,c=0,d=0,e=0,x;
        cin >> n;
        string str;
        cin >> str;
        for(int i = 0; i <str.size(); i++)
        {
            if(str[i]=='M' || str[i]=='m')
            {
                v1.push_back(1);
            }
            else
            {
                x=i;
                break;
            } 
            // //if(str[0]=='m' || str[0]=='M')
            // if(str[i]=='m' || str[i]=='M')
            // {
            //     a++;
            // }
            // else if(str[i]=='e' || str[i]=='E')
            // {
            //     b++;
            // }
            // else if(str[i]=='o' || str[i]=='O')
            // {
            // c++;
            // }
            // else if(str[i]=='w' || str[i]=='W')
            // {
            //     d++;
            // }
            // else e++;
        }
        for(int i=x; i<str.size(); i++)
        {
            if(str[i]=='e' || str[i]=='E')
            {
                v2.push_back(1);
            }
            else 
            {
                x=i;
                break;
            }
        }
        for(int i=x; i<str.size(); i++)
        {
            if(str[i]=='o' || str[i]=='O')
            {
                v3.push_back(1);
            }
            else
            {
            x=i;
             break;
            }
        }
        for(int i=x; i<str.size(); i++)
        {
            if(str[i]=='w' || str[i]=='W')
            {
                v4.push_back(1);
            }
            else  break;
        }
        x=v1.size()+v2.size()+v3.size()+v4.size();
        if(x==n && v1.size()!=0 && v2.size()!=0 && v3.size()!=0 && v4.size()!=0)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}