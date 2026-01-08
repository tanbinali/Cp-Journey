#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> v(n), freq(m+1,0);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v[i] = val;
        freq[val]++;
    }

    for (int i = 1; i <= m; i++)
    {
        cout << freq[i] << endl;
    }
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}