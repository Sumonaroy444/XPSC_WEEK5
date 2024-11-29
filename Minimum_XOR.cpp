#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int XOR=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            XOR^=a[i];
        }
        int ans = XOR;
        for(int i=0;i<n;i++){
            int curr_xor = (XOR^a[i]);
            ans = min(ans,curr_xor);
        }
        cout<<ans<<endl;
    }
}


