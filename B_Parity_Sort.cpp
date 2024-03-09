#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
    vector<int>v,v1,v2,v3;
    for (int i = 0; i <n;i++) 
    {
        cin >>a;
        v.push_back(a);
    }
    for(int i = 0; i <v.size(); i++)
    {
        if(v[i]%2==0)
        {
            v1.push_back(v[i]);
        }
        else
        {
            v2.push_back(v[i]);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    // for(int i = 0; i < v3.size(); i++)
    // {
    //     cout << v3.at(i) << " ";
    // }
    // for(int i=0; i < v1.size(); i++)
    // {
    //     cout << v1[i] <<" ";
    // }
    // cout<<endl;
    // for(int i=0; i < v2.size(); i++)
    // {
    //     cout << v2[i] <<" ";
    // }
    // cout<<endl;
    int t = 0, s = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i]%2==0)
        {
            v3.push_back(v1[s]);
            s++;
            // int j=0;
            // for( ; j<v1.size(); j++)
            // {
            // v3.push_back(v1[j]);
            // break;
            // }
            // j++;
        }
        else
        {
            v3.push_back(v2[t]);
            t++;
            // int j=0;
            // for(; j<v2.size(); j++)
            // {
            // v3.push_back(v2[j]);
            // break;
            // }
            // j++; 
        }
    }
    sort(v.begin(), v.end());
    if(v==v3)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    // for(int i=0;i<v3.size();i++)
    // {
    //     cout << v3[i] << " ";
    // }
    }
}