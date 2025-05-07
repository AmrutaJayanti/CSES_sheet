#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 1e9 + 7;

// Fast exponentiation
ll binpow(ll a, ll b, ll mod) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) { // if b is odd
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

void solve() {
    ll n;
    cin >> n;

    ll ans = binpow(2, n, MOD);
    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}
