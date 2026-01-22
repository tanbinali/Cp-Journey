#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int RA, CA;
    cin >> RA >> CA;

    vector<vector<long long>> A(RA, vector<long long>(CA));
    for (int i = 0; i < RA; i++)
        for (int j = 0; j < CA; j++)
            cin >> A[i][j];

    int RB, CB;
    cin >> RB >> CB;

    vector<vector<long long>> B(RB, vector<long long>(CB));
    for (int i = 0; i < RB; i++)
        for (int j = 0; j < CB; j++)
            cin >> B[i][j];

    vector<vector<long long>> C(RA, vector<long long>(CB, 0));

    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            for (int k = 0; k < CA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            cout << C[i][j] << " ";
        }
        cout << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}