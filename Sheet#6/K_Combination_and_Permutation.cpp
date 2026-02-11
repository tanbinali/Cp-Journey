#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

ll factorial(int n) {
    ll result = 1;
    for (int i = 2; i<=n; i++)
        result*=i;
    return result;
}

void solve() {
    int A,B;
    cin >> A >> B;

    ll factA = factorial(A);
    ll factB = factorial(B);
    ll factAB = factorial(A-B);

    ll NCR = factA/(factB*factAB);
    ll NPR = factA/factAB;

    cout << NCR << " " << NPR;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}