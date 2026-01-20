#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==0) cnt++;
        else cout << a[i] << " ";
    }
    while(cnt--){
        cout << 0 << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}