#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, t;
    if (!(cin >> n >> t)) return;
    if (t == 10) {
        if (n == 1) {
            cout << "-1" << endl;
        } else {
            cout << "1";
            for (int i = 0; i < n - 1; i++) {
                cout << "0";
            }
            cout << endl;
        }
    } 
    else {
        cout << t;
        for (int i = 0; i < n - 1; i++) {
            cout << "0";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}