#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll n,m,h;
    cin >> n >> m >> h;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> tmp(n,0);
    vector<int> v(n,0);
    int cnt=1;
    while(m--){
        ll b,c;
        cin >> b >> c;
        b--;
        if(v[b]!=cnt){
            tmp[b]=0;
            v[b]=cnt;
        }
        tmp[b]+=c;
        if(a[b]+tmp[b]>h) cnt++;
    }

    for (int i = 0; i < n; i++) {
        ll val = a[i];
        if(v[i]==cnt) val+=tmp[i];
        cout << val << " ";
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