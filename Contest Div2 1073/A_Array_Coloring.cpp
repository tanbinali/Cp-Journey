#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int tgt = a[0] % 2;
    for (int i = 1; i < n; i++) 
    {
        if((a[i]+i)%2 != tgt){
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}