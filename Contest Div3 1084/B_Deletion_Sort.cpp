#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    bool flg=true;
    for(int i=0; i+1<n; i++)
    {
        if(a[i]>a[i+1]){
            flg=false;
            break;
        }
    }
    if(flg) cout << n << nl;
    else cout << "1" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}