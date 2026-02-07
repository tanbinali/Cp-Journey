#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    map<int,int> freq;
            
    ll ans = 0;
            
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int val = x-i;
        ans+=freq[val];
                
        freq[val]++;
    }
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}