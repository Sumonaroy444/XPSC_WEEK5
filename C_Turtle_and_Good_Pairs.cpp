
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<pair<int,char>>v(26);
        for(int i=0;i<26;i++){
            v[i].second = 'a'+i;
        }
        for(char c: s){
            v[c-'a'].first++;
        }
        sort(v.rbegin(),v.rend());
        string result(n,' ');
        int idx =0;
        for(auto[cnt,ch]:v){
            if(cnt ==0)
              break;
              for(int i=0;i<cnt;i++){
                if(idx>=n)
                  idx = 1;

                  result[idx]= ch;
                  idx+=2;
              }
        }
        cout<<result<<endl;
    }
}

