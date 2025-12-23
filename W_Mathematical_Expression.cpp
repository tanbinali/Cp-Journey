#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,c;
    char q,s;
    cin >> a >> s >> b >> q >> c;

    if(s=='+'){
        if(a+b == c) cout << "Yes";
        else cout << a+b;
    }
    else if(s=='-'){
        if(a-b == c) cout << "Yes";
        else cout << a-b;
    }
    if(s=='*'){
        if(a*b == c) cout << "Yes";
        else cout << a*b;
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