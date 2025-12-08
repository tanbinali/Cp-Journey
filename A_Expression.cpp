#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int val1 = a + b + c;
    int val2 = a * b * c;
    int val3 = (a + b) * c;
    int val4 = a * (b + c);
    int val5 = a + b * c;
    int val6 = a * b + c;

    int ans = max(val1, max(val2, max(val3, max(val4, max(val5, val6)))));

    cout << ans << endl;

    return 0;
}