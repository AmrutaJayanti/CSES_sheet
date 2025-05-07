#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    set<int> s(a.begin(),a.end());
    cout<<s.size()<<endl;
}


int main(){
    solve();
    return 0;
}