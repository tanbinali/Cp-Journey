#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 998244353;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> val(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> val[i];
        }

        vector<pair<int,int>> e(m);
        for (int i = 0; i < m; i++) {
            cin >> e[i].first >> e[i].second;
        }

        vector<int> order(m);
        iota(order.begin(), order.end(), 0);

        sort(order.begin(), order.end(),
             [&](int x, int y) {
                 return val[e[x].second] < val[e[y].second];
             });

        vector<unordered_map<long long, long long>> ways(n + 1);
        long long result = 0;

        for (int id : order) {
            int from = e[id].first;
            int to   = e[id].second;

            long long add = 1;
            long long diff = val[to] - val[from];

            auto it = ways[from].find(diff);
            if (it != ways[from].end()) {
                add = (add + it->second) % MOD;
            }

            result = (result + add) % MOD;
            ways[to][val[from]] = (ways[to][val[from]] + add) % MOD;
        }

        cout << result << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
