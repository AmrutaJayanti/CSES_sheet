#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin>>n;

    ll sum = 0;
    ll i =1;
    while(true)
    {
        ll d= n/(ll)pow(5,i);
        if(d==0) break;

        sum+=d;
        i++;
    }
    cout<<sum;
}

int main(){
    solve();
    return 0;
}