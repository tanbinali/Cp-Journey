#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,m,k;
    cin >> n >> m >> k;

    unordered_set<ll> r;
    for(int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        r.insert(x);
    }

    vector<ll> s;
    for(int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        s.push_back(x);
    }

    string cmd;
    cin >> cmd;

    ll move=0;
    for(char c:cmd) {
        if(c=='L') move-=1;
        else move+=1;
        vector<ll> tmp;
        for(ll x:s) {
            ll pos = x-move;
            if(r.count(pos)) tmp.push_back(pos);
        }
        for(ll x:tmp) r.erase(x);
        cout << r.size() << " ";
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