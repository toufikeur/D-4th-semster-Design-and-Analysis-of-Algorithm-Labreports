#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str ;
        cin >> str;
        string a,b;
        bool ok = false;
        a+=str[0];
        for (int i=1;i<str.size();i++)
        {
            if(str[i]!='0' || ok)
            {
                b+=str[i];;
                ok = true;
            }
            else a+=str[i];
        }
        if(b.size()==0) b+='0';
        int x= stoi(a); int y=stoi(b);
        if(y>x && x!=0 && y!=0)
        {
            cout<<x << " "<<y<<endl;
        }
        else cout<<"-1"<<endl;
    }
}