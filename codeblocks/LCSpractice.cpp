#include<bits/stdc++.h>
using namespace std;

lcs(string s1,string s2,int n, int m)
    {

        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
        {

            for(int j=0;j<=m; j++)
            {


                if(i==0 || j==0)
                {

                    dp[i][j]=0;

                }
                else if(s1[i-1]==s2[j-1])
                {

                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
            int i=n;
            int j=m;
            string s="";
            while(i>0 && j>0)
            {

                if(s1[i-1]==s2[j-1])
                {
                    s.push_back(s1[i-1]);
                    i--;
                    j--;
                }
                else
                {
                    if(dp[i-1][j]>dp[i][j-1])
                    {

                        i--;
                    }
                    else j--;
                }
            }
            reverse(s.begin(),s.end());
            cout<<dp[n][m];
            cout<<endl<<"LCS:"<<s<<endl;
            return dp[n][m];

        }

int main()
    {
     string s1,s2;
     int n,m;
     cout<<"Enter first string :";
     cin>>s1;
     cout<<"Enter second string :";
     cin>>s2;
     n=s1.length();
     m=s2.length();
     cout<< lcs(s1,s2,n,m)<<endl;
    }
