#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l, r;
    if (!(cin >> n >> l >> r)) return;

    vector<int> p(n + 1);
    p[0] = 0;

    int current_val = 1;

    for (int i = 1; i <= n; i++) {
        if (i == r) {
            p[i] = p[l - 1];
        } else {
            p[i] = current_val++;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << (p[i] ^ p[i - 1]) << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}