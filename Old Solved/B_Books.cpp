#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long t;
    
    if (cin >> n >> t) {
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_books = 0;
        long long current_sum = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            current_sum += a[right];
            while (current_sum > t) {
                current_sum -= a[left];
                left++;
            }
            if ((right - left + 1) > max_books) {
                max_books = right - left + 1;
            }
        }

        cout << max_books << endl;
    }

    return 0;
}