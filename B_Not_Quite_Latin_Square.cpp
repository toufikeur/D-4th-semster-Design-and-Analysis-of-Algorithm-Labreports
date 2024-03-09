#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str1,str2,str3;
        int sum1 = 0,sum2=0,sum3=0;
        cin >> str1 >> str2 >> str3;
        // for(int i=0;i<3;i++)
        // {
        //     if(str1[1]!='A')
        //     {

        //     }

        // }
        for(int i=0 ; i<3;i++)
        {
            sum1=sum1+str1[i];
        }
        for(int i=0 ; i<3;i++)
        {
            sum2=sum2+str2[i];
        }
        for(int i=0 ; i<3;i++)
        {
            sum3=sum3+str3[i];
        }
       if(sum1!=198)
       {
         if(sum1==194)
        {
            cout<<"C"<<endl;
        }
        else if(sum1==195)
        {
            cout<<"B"<<endl;
        }
        else if(sum1==196)
        {
            cout<<"A"<<endl;
        }
        }
    if(sum2!=198)
        {
         if(sum2==194)
        {
            cout<<"C"<<endl;
        }
        else if(sum2==195)
        {
            cout<<"B"<<endl;
        }
        else if(sum2==196)
        {
            cout<<"A"<<endl;
        }
        }
        if(sum3!=198)
        {
         if(sum3==194)
        {
            cout<<"C"<<endl;
        }
        else if(sum3==195)
        {
            cout<<"B"<<endl;
        }
        else if(sum3==196)
        {
            cout<<"A"<<endl;
        }
        }
    }
}