#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';
        int inverted = 9 - digit;

        if (inverted < digit) {
            if (i == 0 && inverted == 0) {
                continue;
            }
            s[i] = inverted + '0';
        }
    }

    cout << s << endl;

    return 0;
}