#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int x,y;
    cin >> x >> y;

    swap(x,y);
    cout << x << " " << y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}