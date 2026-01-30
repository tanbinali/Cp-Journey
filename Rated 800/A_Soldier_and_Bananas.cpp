#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int k,n,w;
    cin >> k >> n >> w;
    
    int cnt = w*(w+1)/2;
    int cst = k*cnt;
    int brw = cst-n;
    if (brw < 0) cout << 0;
    else cout << brw;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}