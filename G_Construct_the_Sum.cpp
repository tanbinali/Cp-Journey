#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, s;
    cin >> n >> s;

    ll max = (n * (n + 1)) / 2;

    if (s > max) {
        cout << -1 << endl;
        return;
    }

    vector<int> result;
    for (int i = n; i >= 1; i--) {
        if (s >= i) {
            s -= i;
            result.push_back(i);
        }
        
        if (s == 0) break;
    }

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    // solve();

    return 0;
}