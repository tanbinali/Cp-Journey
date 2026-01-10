#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int pos = 0;
    int nega = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] < 0) pos++;
            if (a[i] > 0) nega++;
        } 
        else {
            if (a[i] > 0) pos++;
            if (a[i] < 0) nega++;
        }
    }

    cout << min(pos, nega) << '\n';
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}