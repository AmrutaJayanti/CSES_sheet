#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n); // applicants
    vector<int> b(m); // apartments

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, gets = 0;
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) {
            gets++;
            i++;
            j++;
        } else if (b[j] < a[i] - k) {
            j++;
        } else {
            i++;
        }
    }

    cout << gets << endl;
}

int main() {
    solve();
    return 0;
}
