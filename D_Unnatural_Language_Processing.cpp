#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t ;
   cin >> t ;
   int n ;
   string str ;
 
   while(t--){
       cin >> n ;
       cin >> str ;
       for (int i = 0; i < str.size() ; ) {
 
           if((str[i]=='b' || str[i]=='c' || str[i]=='d') &&
           (str[i+1]=='a' || str[i+1]=='e' ) &&
           (str[i+2]=='b' || str[i+2]=='c' || str[i+2]=='d')
           && ((str[i+3] != 'a' && str[i+3] != 'e')) )
 
               //you must count after each condition
           {
               //if we here you take CVC
 
               if( i+2 == str.size() -1) {
                   cout<<str[i]<<str[i+1]<<str[i+2];
               }
               else
               {
                   cout<<str[i]<<str[i+1]<<str[i+2]<<".";
               }
               i+=3 ;
 
           }
           else
           {
 
               //if we here you take CV
 
               if(i+1 == str.size() - 1 )
               {
                   cout<<str[i]<<str[i+1];
               }
               else
               {
                   cout<<str[i]<<str[i+1]<<".";
               }
               i+=2;
           }
 
       }
       cout << endl;
    }
 
 }