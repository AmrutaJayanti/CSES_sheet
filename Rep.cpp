#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    string s;
    cin >> s;
    ll maxC=0,C=0;
    for(ll i=1;i<s.length();i++)
    {
        if(s[i-1]==s[i]) C++;
        else C=0;

        maxC = max(maxC,C);
    }

    cout<<maxC+1<<endl;
}


int main() {
    solve();
    return 0;
}