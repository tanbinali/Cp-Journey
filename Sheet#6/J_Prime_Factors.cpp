#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll n;
    cin >> n;

    for (ll i = 2; i * i <= n; i++) {
        if (n%i==0){
            int count = 0;
            while (n%i==0) {
                n/=i;
                count++;
            }
            cout << "(" << i << "^" << count << ")";
            if (n > 1) cout << "*";
        }
    }

    if(n>1){
        cout << "(" << n << "^1)";
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