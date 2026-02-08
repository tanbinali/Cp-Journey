#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;

    while (m>n) {
        if (m%2==0) m/=2;
        else m++;
        cnt++;
    }
    cnt+=(n-m);
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