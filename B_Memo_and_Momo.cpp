#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,k;
    cin >> a >> b >> k;

    if(a%k==0 && b%k==0) cout << "Both";
    if(a%k==0 && b%k!=0) cout << "Memo";
    if(a%k!=0 && b%k==0) cout << "Momo";
    if(a%k!=0 && b%k!=0) cout << "No One";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}