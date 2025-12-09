#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;
bool is_prime[MAX];

void sieve() {
    fill(is_prime, is_prime + MAX, true);
    
    is_prime[0] = false;
    is_prime[1] = false;
    
    for (int i = 2; i * i < MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    sieve();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        long long root = sqrt(x);

        if (root * root == x && is_prime[root]) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}