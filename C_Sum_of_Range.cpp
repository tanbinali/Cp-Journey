#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

ll sumAll(ll n) {
    return n * (n + 1) / 2;
}

ll sumEven(ll n) {
    ll k = n / 2;
    return k * (k + 1);
}

ll sumOdd(ll n) {
    ll k = (n + 1) / 2;
    return k * k;
}

void solve() {
    ll A, B;
    cin >> A >> B;

    if (A > B) swap(A, B);

    cout << sumAll(B) - sumAll(A - 1) << endl;
    cout << sumEven(B) - sumEven(A - 1) << endl;
    cout << sumOdd(B) - sumOdd(A - 1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}