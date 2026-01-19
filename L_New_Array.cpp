#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

vector<int> concatenateArrays(const vector<int>& A, const vector<int>& B) {
    vector<int> C;
    for (int x : B) C.push_back(x);
    for (int x : A) C.push_back(x);
    return C;
}

void solve() {
    int n;
    cin >> n;

    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    vector<int> C = concatenateArrays(A, B);

    for (int x : C) cout << x << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}