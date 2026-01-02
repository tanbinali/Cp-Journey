#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll id;
    cin >> id;
    ll row = id / 4; 
    ll col;

    if (row % 2 == 0) col = id % 4;
    else col = 3 - (id % 4);

    cout << row << " " << col << endl;
    
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