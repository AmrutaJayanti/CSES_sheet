#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    cout<<n<<" ";
    while(n>=1){
        if(n==1) break;
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else {
            n = n*3 + 1;
            cout<<n<<" ";
        }
    }

}


int main(){
    solve();
    return 0;
}