#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

bool odd(ll n){
    if(n%2) return true;
    else return false;
}

bool palindrome (ll n){
    string bin = "";
    while (n > 0) {
		int bit = n%2;
      	bin.push_back('0' + bit);
        n /= 2;
    }
    
	string pal = bin;
    reverse(bin.begin(), bin.end());

    if(bin == pal) return true;
    else return false;
}

void solve() {
    ll n;
    cin >> n;

    if(odd(n) && palindrome(n)) cout << "YES";
    else cout << "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}