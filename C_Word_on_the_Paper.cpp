#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1,str2,str3,str4,str5,str6,str7,str8;
        vector<char> v1,v2,v3,v4,v5,v6,v7,v8;
        cin >> str1 >> str2 >> str3 >> str4 >> str5>> str6 >> str7 >> str8;
        for(int i=0;i<8;i++)
        {
            if(str1[i]>='a' && str1[i]<='z')
            {
                v1.push_back(str1[i]);
            }
            if(str2[i]>='a' && str2[i]<='z')
            {
                v1.push_back(str2[i]);
            }
            if(str3[i]>='a' && str3[i]<='z')
            {
                v1.push_back(str3[i]);
            }
            if(str4[i]>='a' && str4[i]<='z')
            {
                v1.push_back(str4[i]);
            }
            if(str5[i]>='a' && str5[i]<='z')
            {
                v1.push_back(str5[i]);
            }
            if(str6[i]>='a' && str6[i]<='z')
            {
                v1.push_back(str6[i]);
            }
            if(str7[i]>='a' && str7[i]<='z')
            {
                v1.push_back(str7[i]);
            }
            if(str8[i]>='a' && str8[i]<='z')
            {
                v1.push_back(str8[i]);
            }
        }
        for(int i=0;i<v1.size();i++)
        {
            cout << v1[i];
        }
        cout << endl;
    }
    return 0;
}
