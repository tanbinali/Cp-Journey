#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (cin >> n >> m) {
        int moves = 0;

        while (m > n) {
            if (m % 2 == 0) {
                m /= 2;
            } 
            else {
                m++;
            }
            moves++;
        }
        moves += (n - m);
        cout << moves << endl;
    }
    
    return 0;
}