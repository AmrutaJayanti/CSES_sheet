#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;

    vector<string> st;
    sort(s.begin(),s.end());
    do {
        st.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    cout<<st.size()<<endl;
    for(auto p : st){
        cout<<p<<endl;
    }
}



int main() {
    solve();
    return 0;
}