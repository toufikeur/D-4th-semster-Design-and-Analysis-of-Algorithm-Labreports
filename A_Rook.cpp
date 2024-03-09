#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    vector<int> v1, v2;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int x = str[0] - 'a';
        int y = str[1] - '0';
        for (int i = 1; i <= 8; i++)
        {
            if (y != i)
            {
               cout<<str[0]<<i<<endl;
            }
        }
        for (int i = 0; i < 8; i++)
        {
            if (x != i)
            {
                char x='a'+i;
                cout<<x<<str[1]<<endl;
            }
        }

        // for (int i = 0; i < 7; i++)
        // {
        //     char cr = v2[i] + 'a';
        //     cout << str[0] << v1[i] << endl;
        //     cout << cr << str[1] << endl;
        // }
        // for (int i = 0; i < 7; i++)
        // {
        //     char cr = v2[i] + 'a';
        //     cout << cr << str[1] << " ";
        // }
        // for(int i = 0; i <v1.size(); i++)
        // {
        //     char c = v1[i];
        //     cout << c+'a' <<" ";
        // }
        // for(int i = 0; i < v2.size(); i++)
        // {
        //     cout << v2[i] <<" ";
        // }
    }
}