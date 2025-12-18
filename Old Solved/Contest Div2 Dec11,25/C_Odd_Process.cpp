#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> evenNums, oddNums;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            (x & 1 ? oddNums : evenNums).push_back(x);
        }

        sort(evenNums.begin(), evenNums.end(), greater<long long>());
        sort(oddNums.begin(), oddNums.end(), greater<long long>());

        int eCnt = evenNums.size();
        int oCnt = oddNums.size();

        vector<long long> evenPref(eCnt + 1, 0);
        for (int i = 0; i < eCnt; i++) {
            evenPref[i + 1] = evenPref[i] + evenNums[i];
        }

        for (int k = 1; k <= n; k++) {
            int needOdd = max(1, k - eCnt);
            if (needOdd % 2 == 0) needOdd++;

            if (needOdd > oCnt || needOdd > k) {
                cout << 0 << " ";
            } else {
                int takeEven = k - needOdd;
                long long res = oddNums[0] + evenPref[takeEven];
                cout << res << " ";
            }
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
