#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int a,b;
    char s;
    cin >> a >> s >> b;

    if(s=='<'){
        if(a<b) cout << "Right";
        else cout << "Wrong";
    }
    else if(s=='>'){
        if(a>b) cout << "Right";
        else cout << "Wrong";
    }
    else if(s=='='){
        if(a==b) cout << "Right";
        else cout << "Wrong";
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