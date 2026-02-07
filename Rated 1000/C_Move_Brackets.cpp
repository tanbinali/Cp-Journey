#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt=0, ans=0;

    for (char c:s) {
        if(c=='(') cnt++;
        else
        {
            if(cnt>0) cnt--;
            else ans++;
        }
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