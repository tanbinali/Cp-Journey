#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

bool isPalindrome(int x) {
    int original = x, rev = 0;
    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    return original == rev;
}

int countDivisors(int x) {
    int cnt = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            cnt++;
            if (i != x / i) cnt++;
        }
    }
    return cnt;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    int primeCount = 0, palindromeCount = 0;
    for (int x : a) {
        if (isPrime(x)) primeCount++;
        if (isPalindrome(x)) palindromeCount++;
    }

    int maxDivisors = 0;
    int numberWithMaxDivisors = 0;

    for (int x : a) {
        int d = countDivisors(x);
        if (d > maxDivisors || (d == maxDivisors && x > numberWithMaxDivisors)) {
            maxDivisors = d;
            numberWithMaxDivisors = x;
        }
    }

    cout << "The maximum number : " << mx << "\n";
    cout << "The minimum number : " << mn << "\n";
    cout << "The number of prime numbers : " << primeCount << "\n";
    cout << "The number of palindrome numbers : " << palindromeCount << "\n";
    cout << "The number that has the maximum number of divisors : " 
         << numberWithMaxDivisors << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}