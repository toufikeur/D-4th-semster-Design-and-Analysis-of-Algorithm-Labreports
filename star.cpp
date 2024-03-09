#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,i,j,c;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(i==0 && j%3!=0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
    }
    cout<<endl;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<7;j++)
        {   
          if(i==1 && j%3==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
    }
    cout<<endl;
    for(int i=2;i<5;i++)
    {
        for(int j=2;j<7;j++)
        { 
         if((i==2 && j==1) || (i==2 && j==5))
            {
                cout<<"*"; 
            }
            else
            {
                cout<<" ";
            }
        }
    }
cout<<endl;
        for(i=3; i<5; i++)
        {
            for(int j=3; j<7; j++)
            {
        if((i==3 && j==2) || (i==3 && j==4))
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
            }
        }
        cout<<endl;
     for(int i=4; i<5; i++)
     {
        for(int j=3; j<7; j++)
        {
     if(i==4 && j==3)
    {
        cout<<"*";
    }

    }
     }
    }