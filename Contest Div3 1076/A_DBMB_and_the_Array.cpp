#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,s,x;
    cin >> n >> s >> x;

    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sum+=a;
    }

    if ((s-sum)%x==0 && sum<=s) cout << "YES" << nl;
    else cout << "NO" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}