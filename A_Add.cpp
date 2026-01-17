#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

ll sum(int a,int b){
    return a+b;
}

void solve() {
    int x,y;
    cin >> x >> y;
    cout << sum(x,y);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}