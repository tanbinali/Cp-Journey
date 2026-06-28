#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;
    
    int ans=0;
    
    if ((a1>b1)-(a1<b1)+(a2>b2)-(a2<b2)>0) ans+=2;
    if ((a1>b2)-(a1<b2)+(a2>b1)-(a2<b1)>0) ans+=2;
    
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}