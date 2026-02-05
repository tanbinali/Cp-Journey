#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int x;
    cin >> x;

    int cnt = 0;
    
    while (x>0)
    {
        if (x%2==1) cnt++;
        x = x/2;
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