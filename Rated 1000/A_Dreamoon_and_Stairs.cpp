#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    int mini=(n+1)/2;

    for (int i=mini; i<=n; i++)
    {
        if(i%m==0){
            cout << i;
            return;
        }
    }
    cout << "-1";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}