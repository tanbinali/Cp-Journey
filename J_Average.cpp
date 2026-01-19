#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    double sum = 0;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    double avg = sum / n;
    cout << fixed << setprecision(7) << avg;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}