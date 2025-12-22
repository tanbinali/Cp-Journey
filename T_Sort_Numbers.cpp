#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    vector <ll> a;

    for (int i = 0; i < 3; i++)
    {
        ll val;
        cin >> val;
        a.push_back(val);
    }
    
    vector<ll> b = a;

    sort(a.begin(),a.end());

    for(auto i : a) cout << i << endl;
    cout << endl;
    for(auto i : b) cout << i << endl;
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