#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(1002, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (freq[a[i] + 1] > 0) {
            cnt++;
        }
    }

    cout << cnt;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}