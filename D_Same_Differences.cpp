#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            map<int, int> freq;
            
            long long ans = 0;
            
            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;

                int val = x - i;
                ans += freq[val];
                
                freq[val]++;
            }
            cout << ans << "\n";
        }
    }
    
    return 0;
}