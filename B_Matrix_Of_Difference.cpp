#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[2500];
        int n;
        cin>>n;
        for(int i=0;i<n*n;i++){
            if(i%2 ==0){
                arr[i]=i/2+1;
            }
            else{
                arr[i] = n*n-i/2;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i%2 == 0){
                    cout<<arr[i*n+j]<<" ";
                }
                else{
                    cout<<arr[i*n+n-1-j]<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}


