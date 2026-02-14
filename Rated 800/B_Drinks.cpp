#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    double sum=0,p;

    for (int i = 0; i<n; i++)
    {
        cin >> p;
        sum += p;
    }

    double res=sum/n;

    cout << fixed << setprecision(12) << res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}