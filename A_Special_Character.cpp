#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n%2) { 
            cout << "NO" << endl;
            continue; 
        }
        cout << "YES" << endl;
        for (int i = 1;i<=n/2;i++) {
            if(i%2==0)
               cout << "BB"; 
            else
              cout<<"AA";
        }
        cout << endl; 
    }
    return 0;
}

