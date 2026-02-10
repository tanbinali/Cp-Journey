#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,h;
    cin >> n >> h;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a>h) cnt+=2;
        else cnt+=1;
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