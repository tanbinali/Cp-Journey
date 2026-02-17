#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,k;
    cin >> n >> k;
    
    int ans=k,cnt=0;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        if(x%k==0) ans=0;
        else ans=min(ans,k-(x%k));
        
        if(x%2==0) cnt++;
    }
    
    if(k==4){
        int ops=max(0,2-cnt);
        ans=min(ans, ops);
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