#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int N, M;
    cin >> N >> M;

    vector<long long> A(N), B(M);

    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < M; i++)
        cin >> B[i];

    int i = 0, j = 0;

    while (i < N && j < M) {
        if (A[i] == B[j])
            j++;
        i++;
    }

    if (j == M)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}