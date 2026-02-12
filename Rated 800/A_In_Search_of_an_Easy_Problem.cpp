#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    int inp;
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        if(inp==1){
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}