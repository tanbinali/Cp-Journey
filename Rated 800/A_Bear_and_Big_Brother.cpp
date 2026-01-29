#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int a,b;
    cin >> a >> b;
    
    int yrs=0;
    
    while (a<=b){
        a*=3;
        b*=2;
        yrs++;
    }
    
    cout << yrs;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}