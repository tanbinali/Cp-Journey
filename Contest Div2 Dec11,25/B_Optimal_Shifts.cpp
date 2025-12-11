#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;

            string ss = s + s;

            int max_zeros = 0;
            int current_zeros = 0;

            for (char c : ss) {
                if (c == '0') {
                    current_zeros++;
                } else {
                    if (current_zeros > max_zeros) {
                        max_zeros = current_zeros;
                    }
                    current_zeros = 0;
                }
            }
            
            if (current_zeros > max_zeros) {
                max_zeros = current_zeros;
            }

            cout << max_zeros << "\n";
        }
    }
    return 0;
}