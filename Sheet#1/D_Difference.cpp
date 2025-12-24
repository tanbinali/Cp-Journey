#include <bits/stdc++.h>
using namespace std;
    
void solve() {
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << "Difference = " << (a*b)-(c*d);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}