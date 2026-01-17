#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void print(int n) {
    if (n < 1) return;

    print(n - 1);

    if (n > 1) cout << " ";
    cout << n;
}

void solve() {
    int n;
    cin >> n;
    print(n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}