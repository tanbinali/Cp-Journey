#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n),b(n);
    for (int i = 0; i<n; i++)
    {
        cin >> a[i];
        if (i==0) b[i]=a[i];
        else b[i]=a[i]+b[i-1];
    }

    int m;
    cin >> m;
    while (m--){
        int q;
        cin >> q;

        int p = lower_bound(b.begin(),b.end(),q) - b.begin();
        cout << p+1 << nl;
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