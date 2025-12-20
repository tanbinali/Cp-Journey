#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    vector<int> v;

    for (int i = 0; i < 3; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    sort(v.begin(),v.end());

    cout << v.front() << " " << v.back();
    
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