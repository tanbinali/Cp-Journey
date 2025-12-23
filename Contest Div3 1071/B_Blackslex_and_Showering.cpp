#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n+1);

    for (int i = 1; i <= n; i++) cin >> a[i];
    
    ll sum = 0;
    for (int i = 1; i < n; i++){
        sum += abs(a[i]-a[i+1]);
    }

    ll largest = 0;

    for (int i = 2; i <= n-1; i++){
        ll temp = abs(a[i-1]-a[i]) + abs(a[i]-a[i+1]) - abs(a[i-1]-a[i+1]);
        largest = max(largest, temp);
    }

    largest = max(largest, abs(a[1]-a[2]));
    largest = max(largest, abs(a[n-1]-a[n]));

    cout << sum - largest << endl;
    
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