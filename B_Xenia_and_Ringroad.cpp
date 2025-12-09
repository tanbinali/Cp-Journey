#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int n, m;
    cin >> n >> m;

    int current_pos = 1;
    long long total_time = 0;

    for (int i = 0; i < m; i++) {
        int target_pos;
        cin >> target_pos;

        if (target_pos >= current_pos) {
            total_time += (target_pos - current_pos);
        } else {
            total_time += (long long)(n - current_pos) + target_pos;
        }
        current_pos = target_pos;
    }

    cout << total_time << endl;

    return 0;
}