#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

const int N = 1e5;
vector<int> adj[N];
int c[N];
int n,m;
int ans=0;

void dfs(int u,int p,int cur) {
    if (c[u]) cur++;
    else cur = 0;
    if (cur>m) return;

    bool leaf = true;
    for (int v:adj[u])
    {
        if (v!=p)
        {
            leaf = false;
            dfs(v,u,cur);
        }
    }

    if (leaf) ans++;
}

void solve() {
    cin >> n >> m;
    for (int i=1; i<=n; i++) cin >> c[i];
    for (int i=0; i<n-1; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,0,0);
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}