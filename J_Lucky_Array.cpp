#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int N;
    cin >> N;

    map<int, int> freq;
    int x, mn = INT_MAX;

    for (int i = 0; i < N; i++) {
        cin >> x;
        freq[x]++;
        mn = min(mn, x);
    }

    if (freq[mn] % 2 != 0) cout << "Lucky" << endl;
    else cout << "Unlucky" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}