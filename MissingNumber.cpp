#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> a[i];

    ll total_sum = n * (n + 1) / 2;
    ll sum = accumulate(a.begin(), a.end(), 0LL);  

    cout << total_sum - sum << endl;
}

int main() {
    solve();
    return 0;
}
