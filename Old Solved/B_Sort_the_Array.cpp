#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b = a;
    sort(b.begin(), b.end());

    int l = -1;
    for(int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            l = i;
            break;
        }
    }
    
    if (l == -1) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return;
    }
    
    int r = -1;
    for(int i = n - 1; i >= 0; i--) {
        if (a[i] != b[i]) {
            r = i;
            break;
        }
    }
    
    reverse(a.begin() + l, a.begin() + r + 1);
    
    if (a == b) {
        cout << "yes" << endl;
        cout << l + 1 << " " << r + 1 << endl; 
    } else {
        cout << "no" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}