#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'
const int maxi = 100005;
ll cnt[maxi];
void solve(){
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        cnt[x] += x;
    }

    ll prev2 = 0;
    ll prev1 = cnt[1];
    for (int i = 2; i < maxi; ++i)
    {
        ll cur = max(prev1, prev2 + cnt[i]);
        prev2 = prev1;
        prev1 = cur;
    }

    cout << prev1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}