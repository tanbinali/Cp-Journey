#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    int q;
    cin >> q;

    while (q--) {
        int m;
        cin >> m;

        int count = upper_bound(x.begin(), x.end(), m) - x.begin();

        cout << count << "\n";
    }

    return 0;
}