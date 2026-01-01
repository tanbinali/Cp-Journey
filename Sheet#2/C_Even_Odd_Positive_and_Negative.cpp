#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, even=0, odd=0, pos=0, neg=0;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);

        if(val%2==0) even++;
        if(val%2!=0) odd++;
        if(val > 0) pos++;
        if(val < 0) neg++;
    }
    
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}