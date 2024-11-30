#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int mx_cnt =0;
        for(auto x : mp){
            mx_cnt = max(mx_cnt,x.second);
        }
        int ans=0;
        while(mx_cnt<n){
            int remain_val =n-mx_cnt;
            int add = mx_cnt;
            ans++;
            ans+=min(add,remain_val);
            mx_cnt+=min(add,remain_val);
        }
        cout<<ans<<endl;
    }
}


