#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n, m;
            cin >> n >> m;
            
            vector<long long> a(n + 1);
            for (int i = 1; i <= n; ++i) {
                cin >> a[i];
            }
            
            vector<pair<int, int>> edges(m);

            vector<int> p(m);
            for (int i = 0; i < m; ++i) {
                cin >> edges[i].first >> edges[i].second;
                p[i] = i;
            }

            sort(p.begin(), p.end(), [&](int i, int j) {
                return a[edges[i].second] < a[edges[j].second];
            });

            vector<map<long long, int>> dp(n + 1);
            long long ans = 0;
            long long MOD = 998244353;

            for (int i = 0; i < m; ++i) {
                int idx = p[i];
                int u = edges[idx].first;
                int v = edges[idx].second;

                long long current_ways = 1;
                long long needed = a[v] - a[u];

                if (dp[u].count(needed)) {
                    current_ways = (current_ways + dp[u][needed]) % MOD;
                }

                ans = (ans + current_ways) % MOD;
                dp[v][a[u]] = (dp[v][a[u]] + current_ways) % MOD;
            }
            cout << ans << endl;
        }
    }
    return 0;
}