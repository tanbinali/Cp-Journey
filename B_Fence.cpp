#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    if (cin >> n >> k) {
        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int current_sum = 0;
        for (int i = 0; i < k; i++) {
            current_sum += h[i];
        }
        int min_sum = current_sum;
        int min_index = 0; 

        for (int i = 1; i <= n - k; i++) {
            current_sum = current_sum - h[i - 1] + h[i + k - 1];

            if (current_sum < min_sum) {
                min_sum = current_sum;
                min_index = i;
            }
        }

        cout << min_index + 1 << endl;
    }

    return 0;
}