#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    int sumx = 0, sumy = 0, sumz = 0, x, y, z;

    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }

    if (sumx == 0 && sumy == 0 && sumz == 0) cout << "YES";
    else cout << "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}