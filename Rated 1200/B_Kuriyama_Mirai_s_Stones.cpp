#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<ll> v(n+1),u;
    for (int i=1; i<=n; i++) cin >> v[i];

    u = v;
    sort(u.begin()+1, u.end());

    vector<ll> pv(n+1,0),pu(n+1,0);

    for (int i=1; i<=n; i++) 
    {
        pv[i]=pv[i-1]+v[i];
        pu[i]=pu[i-1]+u[i];
    }

    int m;
    cin >> m;

    while (m--){
        int tt,l,r;
        cin >> tt >> l >> r;

        if (tt==1) cout << pv[r]-pv[l-1] << nl;
        else cout << pu[r]-pu[l-1] << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}