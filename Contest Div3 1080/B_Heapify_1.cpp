#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n+1);
    for (int i=1; i<=n; i++) cin >> a[i];

    vector<bool> vis(n+1,false);
    bool flg = true;
    for (int i=1; i<=n; i++)
    {
        if(vis[i]) continue;
        vector<int> idx,val;
        for(int j=i; j<=n; j*=2)
        {
            vis[j]=true;
            idx.push_back(j);
            val.push_back(a[j]);
        }
        sort(idx.begin(),idx.end());
        sort(val.begin(),val.end());
        if(idx!=val)
        {
            flg=false;
            break;
        }
    }
    if(flg) cout << "yes" << nl;
    else cout << "no" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}