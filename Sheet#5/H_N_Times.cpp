#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void print (char c, int n){
    if(n==1){
        cout << c << nl;
        return;
    }

    cout << c << " ";
    print(c,n-1);
}

void solve() {
    int n;
    cin >> n;
    char c;
    cin >> c;

    print(c,n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}