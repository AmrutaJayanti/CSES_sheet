#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    ll total_sum = n * (n + 1) / 2;

    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    
    vector<ll> set1, set2;
    ll target = total_sum / 2;

    for (ll i = n; i >= 1; --i) {
        if (target >= i) {
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }

    cout << set1.size() << endl;
    for (auto num : set1) {
        cout << num << " ";
    }
    cout << endl;

    cout << set2.size() << endl;
    for (auto num : set2) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
