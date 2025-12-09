#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long l;
    cin >> n >> l;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double max_gap = 2 * a[0]; 

    max_gap = max(max_gap, (double)2 * (l - a[n-1]));

    for (int i = 0; i < n - 1; i++) {
        double gap = a[i+1] - a[i];
        max_gap = max(max_gap, gap);
    }
 
    cout << fixed << setprecision(10) << max_gap / 2.0 << endl;

    return 0;
}