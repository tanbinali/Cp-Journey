#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,m;
    cin >> n >> m;
    vector<vector<char>> v(n,vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<m ; j++)
        {
            cin >> v[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;
    X--;
    Y--;

    int dx[] = {-1,-1,-1, 0,0, 1,1,1};
    int dy[] = {-1, 0, 1,-1,1,-1,0,1};

    for (int k = 0; k < 8; k++) {
        int nx = X + dx[k];
        int ny = Y + dy[k];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (v[nx][ny] != 'x') {
                cout << "no";
                return;
            }
        }
    }

    cout << "yes";

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