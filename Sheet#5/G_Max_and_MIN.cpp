#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void MinMax(vector<int> arr, int n) {
    int mn = arr[0];
    int mx = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < mn)
            mn = arr[i];
        if (arr[i] > mx)
            mx = arr[i];
    }

    cout << mn << " " << mx;
}


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    MinMax(a,n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}