#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    vector<int> nxt(N, -1);
    for (int i = 0; i < N - 1; i++)
        nxt[i] = i + 1;

    int tail = N - 1;
    long long score = 0;

    int i = 0;
    while (i != -1) {
        char c = S[i];
        int j = nxt[i];

        if (c == 'V') {
            score += 5;
        }
        else if (c == 'W') {
            score += 2;
        }
        else if (c == 'X') {
            if (j != -1) {
                nxt[i] = nxt[j];
                if (j == tail) tail = i;
            }
        }
        else if (c == 'Y') {
            if (j != -1) {
                if (j != tail) {
                    nxt[i] = nxt[j];
                    nxt[tail] = j;
                    nxt[j] = -1;
                    tail = j;
                }
            }
        }
        else if (c == 'Z') {
            if (j != -1) {
                if (S[j] == 'V') {
                    score /= 5;
                    nxt[i] = nxt[j];
                    if (j == tail) tail = i;
                }
                else if (S[j] == 'W') {
                    score /= 2;
                    nxt[i] = nxt[j];
                    if (j == tail) tail = i;
                }
            }
        }

        i = nxt[i];
    }

    cout << score;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t; 
    while (t--) solve();
    return 0;
}