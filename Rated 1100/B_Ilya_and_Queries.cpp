#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;
    
    int n = s.length();
    vector<int> a(n,0);
    
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i]==s[i+1]) count++;
        a[i+1]=count;
    }
    int m;
    cin >> m;
    while (m--){
        int l,r;
        cin >> l >> r;
        cout << a[r-1]-a[l-1] << nl;
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