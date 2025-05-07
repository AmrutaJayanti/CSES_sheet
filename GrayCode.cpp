#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int total = 1 << n; // 2^n total codes

    for (int i = 0; i < total; i++) {
        int gray = i ^ (i >> 1);
        bitset<32> b(gray);
        cout << b.to_string().substr(32 - n) << endl;
    }

    
}


int main() {
    solve();
    return 0;
}