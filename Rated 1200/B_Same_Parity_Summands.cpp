#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll n, k;
    cin >> n >> k;
    
    if (n>=k && (n-(k-1))%2!=0) 
    {
        cout << "YES" << nl;
        for (int i=0; i<k-1; i++) cout << 1 << " ";
        cout << n - (k - 1) << nl;
        return;
    }
    
    if (n>=2*k && (n-2*(k-1))%2==0)
    {
        cout << "YES" << nl;
        for (int i=0; i<k-1; i++) cout << 2 << " ";
        cout << n-2*(k-1) << nl;
        return;
    }
    cout << "NO" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}