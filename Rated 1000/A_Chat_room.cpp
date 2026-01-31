#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;

    string ss = "hello";
    int idx = 0, cnt = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==ss[idx])
        {
            idx++;
            cnt++;
        }

        if (cnt==5) break;
        
    }

    if (cnt==5) cout << "YES";
    else cout << "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}