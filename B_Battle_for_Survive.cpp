#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
� � ll t;
� � cin>>t;
� � while(t--){
� � � � ll n;
� � � � cin>>n;
� � � � vector<ll>a(n);
� � � � ll sum =0;
� � � � for(int i=0;i<n;i++){
� � � � � � cin>>a[i];
� � � � � � sum+=a[i];
� � � � }
� � � � cout<<sum-2*a[n-2]<<endl;
� � }
}


