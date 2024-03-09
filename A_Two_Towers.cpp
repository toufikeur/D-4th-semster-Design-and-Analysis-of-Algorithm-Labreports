#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,x=0,y=0,x1=0,y1=0,count=0,m=0;
        cin >>a>>b;
        vector<char>v1,v2;
        string str1,str2;
        cin >> str1;
        cin >> str2;
        for(int i=0;i<a-1;i++)
        {
            if(str1[i]!=str1[i+1]) 
            {
                x++; 
            }
            else break;
        }
        for(int i=0;i<=x;i++)
        {
            v1.push_back(str1[i]);
        }
        for(int i=0;i<b-1;i++)
        {
            if(str2[i]!=str2[i+1])
            {
             y++;
            }
            else break;
        }
          
        for(int i=0;i<=y;i++)
        {
            v2.push_back(str2[i]);
        }
        // for(int i=0; i<v1.size(); i++)
        // {
        //     cout << v1[i];
        // } 
        // cout<<endl;
        // for(int i=0; i<v2.size();i++)
        // {
        //     cout << v2[i];
        // } 
        if(x==a-1 && y==b-1)
        {
            cout<<"YES"<<endl;
        }
        else if(x!=a-1 && y!=b-1)
        {
            cout<<"NO"<<endl;
        }
        else if((x!=a-1 || y!=b-1) && (str1[a-1]==str2[b-1]))
        {
            cout<<"NO"<<endl;
        }
        else if(x!=a-1 && (str1[a-1]!=str2[b-1]))
        {
            for(int i=a-1;i>x;i--)
            {
              v2.push_back(str1[i]);
            }
           for(int i=0;i<v2.size()-1;i++)
           {
            if(v2[i]!=v2[i+1])
            {
                y1++;
            }
           }
            if(y1==v2.size()-1)
            {
                cout <<"YES" << endl;
            }
            else
            {
                cout <<"NO" << endl;
            }
        }
        else if(y!=b-1 && (str1[a-1]!=str2[b-1]))
        {
            for(int i=b-1;i>y;i--)
            {
              v1.push_back(str2[i]);
            }
         for(int i=0;v1.size()-1; i++)
           {
            if(v1[i]!=v1[i+1])
            {
                count++;
            }
            else
            {
                break;
            }
           }
          for(int i=0; i<v1.size()-1; i++)
        {
           if(v1[i]!=v1[i+1])
           {
            m++;
           }
        }
        // cout<<m<<endl;
        // cout<<v1.size()<<endl;
        if(m ==v1.size()-1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
return 0;
}