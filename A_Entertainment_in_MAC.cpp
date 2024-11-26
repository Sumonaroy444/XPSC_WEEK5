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
         string rev = s;
         reverse(rev.begin(),rev.end());
         if(s<= rev){  // main string reverse er cheye choto ba soman hole
            if(n%2 == 0) // n jor hole main string e print hbe
            cout<<s<<endl;
         else
            cout<<s<<rev<<endl; // n jor na hole mainsting+ reversestring
         }
        else{     // (s>rev) s reverse string cheye boro hole
            if(n%2==1){     // n bijor hole rev print hbe
                cout<<rev<<endl;// ar jor hole reverseString+ mainString  print hbe
            }
            else{
                cout<<rev<<s<<endl;
            }
        }

    }
}
