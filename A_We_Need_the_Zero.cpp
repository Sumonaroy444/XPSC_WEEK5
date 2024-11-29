#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;                     
    cin>>t;
   while(t--){
      int n;                  
      cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
 
      int XOR = 0;
      for(int i=0;i<n;i++){
         XOR^=a[i];
      }
      for(int i=0;i<n;i++){
         a[i]^= XOR;
      }
      int y=0;
      for(int i=0;i<n;i++){
         y^=a[i];
        
      }
      if(y==0){
         cout<<XOR<<endl;
      }
      else{
         cout<<-1<<endl;
      }
   }
}


