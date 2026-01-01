#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    if(n == 0){
        cout << "1" << endl;
        return;
    }

    ll fact = 1;

    for (int i = 2; i <= n; i++)
    {
        fact *= i; 
    }
    
    cout << fact << endl;;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    // solve();

    return 0;
}