#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n, k;
    if (cin >> n >> k)
    {
        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += h[i];
        }
        int min = sum;
        int idx = 0; 

        for (int i = 1; i <= n - k; i++) {
            sum = sum-h[i-1]+h[i+k-1];

            if (sum<min) {
                min = sum;
                idx = i;
            }
        }

        cout << idx+1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}