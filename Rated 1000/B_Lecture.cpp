#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,m;
    cin >> n >> m;
    
    unordered_map<string,string> d;
    for (int i=0; i<m; i++)
    {
        string a,b;
        cin >> a >> b;
        if (b.length()<a.length()) d[a]=b;
        else d[a]=a; 
    }
    
    for (int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        cout << d[s] << (i==n-1?"":" ");
    }
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}