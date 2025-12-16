#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int n = s.length();
    vector<int> dp(n, 0);
    
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i+1]) {
            count++;
        }
        dp[i+1] = count;
    }

    int m;
    cin >> m;
    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}