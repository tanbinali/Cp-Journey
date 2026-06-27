#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,m;
    cin >> n >> m;
    
    int ans=0;
    int cnt=0;
    
    for (int i=1; i<=n; i++)
    {
        int a;
        cin >> a;
        int tmp=(a+m-1)/m;
        if (tmp>=cnt)
        {
            cnt=tmp;
            ans=i;
        }
    }
    
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin > t;
    while (t--) solve();
    return 0;
}