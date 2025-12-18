#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int target_index = 0;
    int matches = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == target[target_index]) {
            target_index++;
            matches++;
        }

        if (matches == 5) {
            break;
        }
    }

    if (matches == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}