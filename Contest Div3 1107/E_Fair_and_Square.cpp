#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void dfs(int u,int par,vector<vector<int>> &adj,vector<int> &sz,vector<int> &p)
{
    sz[u]=1;
    p[u]=par;

    for (int v:adj[u])
    {
        if (v==par) continue;
        dfs(v,u,adj,sz,p);
        sz[u]+=sz[v];
    }
}

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n+1);
    vector<bool> flg(n+1,false);

    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        ll tmp=sqrt(a[i]);
        if (tmp*tmp==a[i]) flg[i]=true;
    }

    vector<vector<int>> adj(n + 1);

    for (int i=0; i<n-1; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> sz(n+1,0), p(n+1,0);

    dfs(1,0,adj,sz,p);

    ll res=0;

    for (int j=1; j<=n; j++)
    {
        if (!flg[j]) continue;

        ll S1=0,S2=0,S3=0;

        for (int v:adj[j])
        {
            ll s;
            if (v==p[j]) s=n-sz[j];
            else s=sz[v];

            S1+=s;
            S2+=s*s;
            S3+=s*s*s;
        }
        ll P2=(S1*S1-S2)/2;
        ll P3=(S1*S1*S1-3*S1*S2+2*S3)/6;
        res+=P2+P3;
    }
    cout << res << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}