#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string S;
    if (!(cin >> S)) return;

    vector<ll> cost(26);
    for (int i = 0; i < 26; i++) {
        cin >> cost[i];
    }

    int n = S.size();
    vector<int> fixed_indices;
    for(int i=0; i<n; ++i) {
        if(S[i] != '?') fixed_indices.push_back(i);
    }

    if(fixed_indices.empty()) {
        cout << 0 << nl;
        for(int i=0; i<n; ++i) cout << 'a';
        cout << nl;
        return;
    }
    auto get_best_char = [&](ll target_cost) -> char {
        for(int c=0; c<26; ++c) {
            if(cost[c] == target_cost) return (char)('a' + c);
        }
        return 'a';
    };

    if(fixed_indices[0] > 0) {
        char target = S[fixed_indices[0]];
        char fill = get_best_char(cost[target - 'a']);
        for(int i=0; i < fixed_indices[0]; ++i) S[i] = fill;
    }
    if(fixed_indices.back() < n - 1) {
        char target = S[fixed_indices.back()];
        char fill = get_best_char(cost[target - 'a']);
        for(int i = fixed_indices.back() + 1; i < n; ++i) S[i] = fill;
    }

    for(size_t k = 0; k < fixed_indices.size() - 1; ++k) {
        int l_idx = fixed_indices[k];
        int r_idx = fixed_indices[k+1];
        
        if (r_idx - l_idx == 1) continue;

        ll costL = cost[S[l_idx] - 'a'];
        ll costR = cost[S[r_idx] - 'a'];
        ll min_val = min(costL, costR);
        ll max_val = max(costL, costR);

        char chosen = 'a';
        for(int c=0; c<26; ++c) {
            if(cost[c] >= min_val && cost[c] <= max_val) {
                chosen = (char)('a' + c);
                break;
            }
        }

        for(int i = l_idx + 1; i < r_idx; ++i) {
            S[i] = chosen;
        }
    }
    ll totalCost = 0;
    for (int i = 0; i < n - 1; i++) {
        totalCost += abs(cost[S[i] - 'a'] - cost[S[i + 1] - 'a']);
    }

    cout << totalCost << nl;
    cout << S << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}