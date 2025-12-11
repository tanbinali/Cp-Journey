#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int current_max = 0;
        int operations = 0;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            
            if (x < current_max) {
                operations++;
            } else {
                current_max = x;
            }
        }
        cout << operations << endl;
    }
    
    return 0;
}