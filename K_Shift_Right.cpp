#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void shift(vector<int>a,int x){
    int n = a.size();
    for (int j = 0; j < x; j++) {
        int last = a[n - 1];
        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = last;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void solve() {
    int n,x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    shift(a,x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}