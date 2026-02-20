#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int max_val=0, min_val=101;
    int max_idx=0, min_idx=0;

    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i]>max_val) {
            max_val=a[i];
            max_idx=i;
        }
        if (a[i]<=min_val) {
            min_val=a[i];
            min_idx=i;
        }
    }

    int ans=max_idx+(n-1-min_idx);
    if(max_idx>min_idx) ans--;

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}