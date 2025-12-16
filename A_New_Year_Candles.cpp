#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    if (!(cin >> a >> b)) return;

    int total_hours = a;
    int residues = a;
    
    while (residues >= b) {
        int new_candles = residues / b;
        
        total_hours += new_candles;
        residues = new_candles + (residues % b);
    }

    cout << total_hours << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}