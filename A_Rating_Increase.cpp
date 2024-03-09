#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0, big = 1, x = 0, z = 0,m=0,lm=0;
        vector<char> v1;
        string str;
        cin >> str;
        int l = str.length();
        // for(in i=0;i<l-1;i++)
        // if(str[i]<str[i])
        for (int i = 1; i < l; i++)
        {
            if(str[i]>str[0])
            {
                big++;
            }
            if (( str[i]!='0') && (str[i+1]>str[i]))
            {
                big++;
            }
            else if (str[i+1] < str[i])
            {
                x = i;
                break;
            }
            else if (str[i] == '0')
            {
                cnt++;
            }
            else if (str[i] > '0')
            {
                x = i;
                break;
            }
        }
        z=cnt + big;
        m=l-z;
       for(int i=0;i<l-1;i++)
       {
        if(str[i]<=str[i+1])
        {
            lm++;
        }
       }
       if(lm==l-1)
       {
        cout<<str[0];
        cout<<" ";
        for(int i=1;i<l;i++)
        {
            cout<<str[i];
        }
       }
    //    cout<< z<< " "<<m;
        if(m==z)
        {
            if((str[0]==str[z]) && (str[m-1]==str[l-1]))
            {
                cout<<"-1";
            }
            else if((str[0]==str[z]) && (str[m-1]<str[l-1]))
            {
                for(int i=0;i<m;i++)
                {
                    cout<<str[i];
                }
                cout<<" ";
                for(int i=m;i<l;i++)
                {
                    cout<<str[i];
                }
            }
        }
        if(m>z)
        {
            for(int i=0;i<z;i++)
            {
                cout<<str[i];
            }
            cout<<" ";
            for(int i=z;i<l;i++)
            {
                cout<<str[i];
            }
        }
        cout<<endl;
    }
    
    //  z=cnt +big;
    // for(int i=0;i<=z;i++)
    // {
    //     v1.push_back(str[i]);
    // }
    // int m=l-z;
    // if(m>z)
    // {
    //    for(int i=0;i<v1.size(); i++)
    // {
    //     cout << v1[i];
    // }
    // cout<<" ";
    // for(int i=z+1;i<l;i++)
    // {
    //     cout << str[i];
    // }
    // }
    // cout<<m<<" "<<z<<endl;

    // else if(m==z)
    // {
    //     if(str[0]==str[z+1])
    //         {
    //             if(str[z-1]<str[l-1])
    //             {
    //                 for(int i=0;i<z;i++)
    //                 {
    //                     cout<<str[i];
    //                 }
    //                 cout<<" ";
    //                 for(int i=z;i<l;i++)
    //                 {
    //                     cout<<str[i];
    //                 }
    //             }
    //             else if((str[z-1]==str[l-1]) && (str[z-1] ==str[l-1]))
    //             {
    //                 cout<<"-1"<<endl;
    //             }
    //         }
    // }
    cout << endl;
}