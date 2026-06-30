#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n+1),b(n+1), c(n+2,0);
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++) cin >> b[i];

    vector<ll> d(n+2,0);
    for (int i=1; i<=n; i++)
    {
        if (i%2!=0) d[i]=a[i]-b[i];
        else d[i]=b[i]-a[i];
    }
    
    for (int i=1; i<=n+1; i++) c[i]=d[i]-d[i-1];

    ll evn=0;
    ll odd=0;
    bool flg=true;
    
    for (int i=1; i<=n+1; i++)
    {
        if (i%2==0)
        {
            evn+=c[i];
            if (evn<0)
            {
                flg=false;
                break;
            }
        }
        else
        {
            odd+=c[i];
            if (odd>0)
            {
                flg=false;
                break;
            }
        }
    }

    if(flg) cout << "YES" << nl;
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