#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> b[i];
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        c[i] = max(a[i], b[i]);
    }
    vector<int> maxi(n);
    maxi[n-1] = c[n-1];
    for (int i = n-2; i >=0; i--)
    {
        maxi[i] = max(c[i], maxi[i+1]);
    }
    vector<ll> tmp(n+1, 0);
    for (int i = 0; i < n; i++)
    {
        tmp[i+1] = tmp[i]+maxi[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l,r;
        cin >> l >> r;
        l--; 
        r--;
        
        ll sum = tmp[r+1]-tmp[l];
        cout << sum << " ";
    }
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}