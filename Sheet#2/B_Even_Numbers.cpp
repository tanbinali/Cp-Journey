#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, cnt=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0) {
            cout << i << endl;
            cnt++;
        }
    }

    if(!cnt) cout << "-1";
    
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