#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int pairs = 0;
    vector<bool> girl_taken(m, false);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!girl_taken[j]) {
                if (abs(a[i] - b[j]) <= 1) {
                    girl_taken[j] = true;
                    pairs++;
                    break;
                }
            }
        }
    }

    cout << pairs << endl;

    return 0;
}