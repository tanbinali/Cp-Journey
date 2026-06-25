#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,m;
    cin >> n >> m;  
    vector<int> a(n+1);
    for (int i=1; i<=n; i++) cin >> a[i];

    vector<int> ans(n + 1);
    
    vector<bool> flg(100005,false);
    int cnt=0;

    for (int i=n; i>=1; i--)
    {
        if(!flg[a[i]])
        {
            flg[a[i]]=true;
            cnt++;
        }
        ans[i]=cnt;
    }
    
    for (int i=0; i<m; i++)
    {
        int l;
        cin >> l;
        cout << ans[l] << nl;
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