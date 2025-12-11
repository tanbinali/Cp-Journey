#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<long long> evens;
            vector<long long> odds;
            
            for (int i = 0; i < n; ++i) {
                long long a;
                cin >> a;
                if (a % 2 == 0) {
                    evens.push_back(a);
                } else {
                    odds.push_back(a);
                }
            }

            sort(evens.rbegin(), evens.rend());
            sort(odds.rbegin(), odds.rend());

            int n_even = evens.size();
            int n_odd = odds.size();

            vector<long long> prefix_even(n_even + 1, 0);
            for (int i = 0; i < n_even; ++i) {
                prefix_even[i + 1] = prefix_even[i] + evens[i];
            }

            for (int k = 1; k <= n; ++k) {
                int min_odds_needed = k - n_even;
                if (min_odds_needed < 1) {
                    min_odds_needed = 1;
                }
                if (min_odds_needed % 2 == 0) {
                    min_odds_needed++;
                }
                if (min_odds_needed > n_odd || min_odds_needed > k) {
                    cout << "0 ";
                } else {
                    int evens_to_take = k - min_odds_needed;
                    long long ans = odds[0] + prefix_even[evens_to_take];
                    cout << ans << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}