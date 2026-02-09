#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int a,b;
    cin >> a >> b;

    int cnt = a;
    int rem = a;
    
    while (rem>=b){
        int n = rem/b;
        
        cnt += n;
        rem = n+(rem%b);
    }
    cout << cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}