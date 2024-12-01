#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n= s.size();
        if(s=="()"){
            cout<<"NO"<<endl;
            continue;
        }
        bool flag = false;
        for(int i=0;i<n-1 ;i++){
            if(s[i] == '('&& s[i+1]=='('|| s[i] ==')'&& s[i+1]==')'){
                flag = true;
            }
        }
        string s1="";
        if(flag==1){
            for(int i=0;i<n;i++){
                s1+="()";
            }
        }
        else{
            for(int i=0;i<n;i++){
                s1+='(';
            }
            for(int i=0;i<n;i++){
                s1+=')';
            }
        }
        cout<<"YES"<<endl;
        cout<<s1<<endl;
    }
} 


