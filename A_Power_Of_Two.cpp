#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll n;
    cin >> n;
    while (n>1)
    {
        if (n%2!=0)
        {
            cout << "NO";
            return;
        }
        n/=2;
    }
    cout << "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}