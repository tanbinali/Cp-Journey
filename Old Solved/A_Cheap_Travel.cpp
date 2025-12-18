#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost_only_singles = n * a;

    int bundles = n / m;
    int remainder = n % m;
    int cost_with_bundles = (bundles * b) + min(remainder * a, b);

    cout << min(cost_only_singles, cost_with_bundles) << endl;

    return 0;
}