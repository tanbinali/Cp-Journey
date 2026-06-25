#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,m;
    cin >> n >> m;

    vector<vector<pair<int,ll>>> adj(n+1);
    for (int i=0; i<m; i++)
    {
        int u,v;
        ll w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    const ll INF = 1e18;
    vector<ll> dist(n+1,INF);
    vector<int> parent(n+1,-1);
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;

    dist[1]=0;
    pq.push({0,1});

    while (!pq.empty())
    {
        ll d=pq.top().first;
        int u=pq.top().second;
        pq.pop();

        if (d>dist[u]) continue;

        for (auto edge:adj[u])
        {
            int v=edge.first;
            ll w=edge.second;

            if (dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
                parent[v]=u;
                pq.push({dist[v],v});
            }
        }
    }

    if (dist[n]==INF) cout << -1 << nl;
    else
    {
        vector<int> path;
        for (int v=n; v!=-1; v=parent[v])
        {
            path.push_back(v);
        }
        reverse(path.begin(),path.end());
        for (int i = 0; i < (int)path.size(); i++) cout << path[i] << (i==(int)path.size()-1?"":" ");
        cout << nl;
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