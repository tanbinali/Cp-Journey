#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll n;
    cin >> n;
    if(n==0){
        cout << 1;
        return;
    }
    int ans[4]={8,4,2,6};
    int idx=n%4;
    if(idx==0) idx=4;
    cout << ans[idx-1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}