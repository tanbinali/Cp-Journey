#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,m;
    cin >> n >> m;
    
    vector<ll> a(n+1);
    for (int i=1; i<=n; i++) cin >> a[i];
    
    vector<int> b(m);
    for (int i=0; i<m; i++) cin >> b[i];
    
    sort(b.begin(),b.end());
    
    ll ans=0,idx=0;
    
    for (int i=0; i<m; i++)
    {
        ll tmp=0;
        for (int j=idx+1; j<=b[i]; j++) tmp+=a[j];
        ans+=abs(tmp);
        idx=b[i];
    }
    
    for (int j=idx+1; j<=n; j++) ans+=a[j];
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