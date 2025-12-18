#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int even_count = 0;
    int last_even_index = 0;

    int odd_count = 0;
    int last_odd_index = 0;

    int val;
    for (int i = 1; i <= n; i++) {
        cin >> val;
        
        if (val % 2 == 0) {
            even_count++;
            last_even_index = i;
        } else {
            odd_count++;
            last_odd_index = i;
        }
    }

    if (even_count == 1) {
        cout << last_even_index << endl;
    } 
    else {
        cout << last_odd_index << endl;
    }

    return 0;
}