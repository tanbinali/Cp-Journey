#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int INF = INT_MAX;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int>a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    vector<int>flg(7,INF),nxt(7);

    for (int i=1; i<=6; i++) flg[i]=(a[0]!=i);
    for (int i=1; i<n; i++)
    {
        for (int x=0; x<nxt.size(); x++) nxt[x]=INF;
        for (int j=1; j<=6; j++)
        {
            for (int k=1; k<=6; k++)
            {
                if(j!=k && j+k!=7) {
                    nxt[k]=min(nxt[k],flg[j]+(a[i]!=k));
                }
            }
        }
        flg=nxt;
    }
    int ans=flg[1];
    for (int i=2; i<=6; i++) ans=min(ans,flg[i]);
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
