#include <bits/stdc++.h>
using namespace std;
    
void solve() {
    long long int x,y;
    cin >> x >> y;

    cout << x << " + " << y << " = " << x+y << endl;
    cout << x << " * " << y << " = " << x*y << endl;
    cout << x << " - " << y << " = " << x-y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}