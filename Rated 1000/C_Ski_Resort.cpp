#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,k;
    ll q;
    cin >> n >> k >> q;

    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    ll ans=0, len=0;

    for (int i=0; i<n; i++) {
        if(a[i]<=q) len++;
        else {
            if(len>=k){
                ll x=len-k+1;
                ans+=x*(x+1)/2;
            }
            len=0;
        }
    }
    if(len>=k)
    {
        ll x=len-k+1;
        ans+=x*(x+1)/2;
    }

    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}