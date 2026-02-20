#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    ll cnt = 0;
    string s;

    for (int i=0; i<n; i++)
    {
        cin >> s;
        if (s[0]=='T') cnt += 4;
        else if (s[0]=='C') cnt += 6;
        else if (s[0]=='O') cnt += 8;
        else if (s[0]=='D') cnt += 12;
        else if (s[0]=='I') cnt += 20;
    }
    cout << cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}