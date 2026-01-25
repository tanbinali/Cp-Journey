#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.rbegin(), a.rend());

    ll maxi=0,req=0;
    for(int k = 1; k <= n; k++)
    {
        req+=b[k-1];
        if(req>n) break;

        ll diff = a[req-1];
        ll cur = diff*k;
        
        maxi = max(maxi,cur);
    }

    cout << maxi << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}