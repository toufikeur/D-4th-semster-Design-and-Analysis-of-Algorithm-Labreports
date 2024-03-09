#include<bits/stdc++.h>
using namespace std;
int main(){
                int t,a,i;
                cin>>t;
                while(t--){
                    cin>>a;
                    int ar[a];
                    int cont=0;
                    for(i=0;i<a;i++){
                        cin>>ar[i];
                    }
                  for(i=0;i<a;i++){
                    if(ar[i]==0 && ar[i+1]==0){
                        cont++;
                      continue;
                    }
                  }
    cout<<cont<<"\n";

    }
  return 0;

  }
