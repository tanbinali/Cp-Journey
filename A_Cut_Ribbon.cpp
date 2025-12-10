#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    int n, a, b, c;

    if (!(cin >> n >> a >> b >> c)) return 0;
    vector<int> dp(n + 1);
    const int UNREACHABLE = -5000; 

    fill(dp.begin(), dp.end(), UNREACHABLE);

    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        if (i >= a && dp[i - a] != UNREACHABLE) {
            dp[i] = max(dp[i], dp[i - a] + 1);
        }

        if (i >= b && dp[i - b] != UNREACHABLE) {
            dp[i] = max(dp[i], dp[i - b] + 1);
        }

        if (i >= c && dp[i - c] != UNREACHABLE) {
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }

    cout << dp[n] << endl;

    return 0;
}