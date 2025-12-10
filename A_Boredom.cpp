#include <bits/stdc++.h>
using namespace std;
const int MAX_VAL = 100005;
long long cnt[MAX_VAL];
long long dp[MAX_VAL];  

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cnt[x] += x; 
    }

    dp[0] = 0;
    dp[1] = cnt[1];

    for (int i = 2; i < MAX_VAL; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i]);
    }

    cout << dp[MAX_VAL - 1] << endl;

    return 0;
}