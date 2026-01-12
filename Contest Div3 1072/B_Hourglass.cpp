#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll s, k, m,z=0;
    cin >> s >> k >> m;
    ll r=m%k;
    ll i=m/k;

    if(s<=k){
        if(!r) cout << s << nl;
        else cout << max(z, s-r) << nl;
    } 
    else{
        if(i%2) cout << k-r << nl;
        else cout << s-r << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}