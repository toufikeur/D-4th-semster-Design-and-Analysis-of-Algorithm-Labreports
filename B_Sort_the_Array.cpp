#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    vector<int>v,v1,v2,v3;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i = 0; i < v.size(); i++)
    {
        v2.push_back(v[i]);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        v1.push_back(v[i]);
    }
    for(int i = 0; i < v1.size(); i++)
    {
        if(v1[i] != v2[i])
        {
            v3.push_back(v1[i]);
        }
    }
    if(v1!=v2)
    {
        cout<<"yes"<<endl;
        for(int i=0; i<v3.size(); i++)
        {
            cout<<v3[i]<<" ";
        }
    }
    else cout<<"no"<<endl;
}