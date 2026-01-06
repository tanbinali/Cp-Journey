#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    ll ans = 0;
    ll len = 1;

    for (int i = 1; i < N; i++) {
        if (A[i] >= A[i - 1]) {
            len++;
        } 
        else {
            ans += len * (len + 1) / 2;
            len = 1;
            }
    }

    ans += len * (len + 1) / 2;
    cout << ans << endl;       

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    // solve();

    return 0;
}