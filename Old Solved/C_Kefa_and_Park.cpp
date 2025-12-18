#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

vector<int> adj[MAXN];
 
int hasCat[MAXN];

int n, m;
int validRestaurants = 0;

void dfs(int u, int p, int currentStreak) {
    if (hasCat[u]) {
        currentStreak++;
    } else {
        currentStreak = 0;
    }

    if (currentStreak > m) {
        return;
    }

    bool isLeaf = true;
    for (int v : adj[u]) {
        if (v != p) {
            isLeaf = false;
            dfs(v, u, currentStreak);
        }
    }

    if (isLeaf) {
        validRestaurants++;
    }
}

void solve() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> hasCat[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, -1, 0);

    cout << validRestaurants << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}