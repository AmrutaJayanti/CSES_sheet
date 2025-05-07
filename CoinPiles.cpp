#include <bits/stdc++.h>
using namespace std;


void solve() {
    int a,b;
    cin>>a>>b;
   if(a==0 && b==0)cout<<"YES"<<endl;
   else if(a==0 || b==0) cout<<"NO"<<endl;
   else if ((a + b) % 3 != 0 || max(a, b) > 2 * min(a, b)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
} 



int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}